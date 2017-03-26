#![feature(allocator)]
#![allocator]

#![no_std]

#![crate_name = "tor_alloc"]
#![crate_type = "rlib"]

#![feature(libc)]
extern crate libc;


#[link(name = "or", kind="static")]
extern {
  fn tor_malloc_(size: libc::size_t) -> *mut libc::c_void;
  fn tor_free_(ptr: *mut libc::c_void);
  fn tor_realloc_(ptr: *mut libc::c_void, size: libc::size_t) -> *mut libc::c_void;
}

#[no_mangle]
pub extern fn __rust_allocate(size: usize, _align: usize) -> *mut u8 {
  unsafe { tor_malloc_(size as libc::size_t) as *mut u8 }
}

#[no_mangle]
pub extern fn __rust_deallocate(ptr: *mut u8, _old_size: usize, _align: usize) {
  unsafe { tor_free_(ptr as *mut libc::c_void) }
}

#[no_mangle]
pub extern fn __rust_reallocate(ptr: *mut u8, _old_size: usize, size: usize,
                                _align: usize) -> *mut u8 {
  unsafe {
    tor_realloc_(ptr as *mut libc::c_void, size as libc::size_t) as *mut u8
  }
}

#[no_mangle]
pub extern fn __rust_reallocate_inplace(_ptr: *mut u8, old_size: usize,
                                        _size: usize, _align: usize) -> usize {
  old_size // Tor doesn't provide this
}

#[no_mangle]
pub extern fn __rust_usable_size(size: usize, _align: usize) -> usize {
    size
}

