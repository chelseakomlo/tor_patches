
extern crate libc;
extern crate tor_alloc;

#[no_mangle]
pub extern fn tor_mathlog(d: libc::c_double) -> libc::c_double {
  d.ln()
}

#[no_mangle]
pub extern fn tor_malloc_zero_(size: libc::size_t) -> *mut libc::c_void {
  let mut v = vec![0; size];
  let p = v.as_mut_ptr();
  std::mem::forget(v);
  p as *mut libc::c_void
}

#[no_mangle]
pub extern fn tor_calloc_(nmemb: libc::size_t, size: libc::size_t)
    -> *mut libc::c_void {
  tor_malloc_zero_(nmemb.checked_mul(size).unwrap())
}
