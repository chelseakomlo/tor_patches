extern crate tor_alloc;
extern crate libc;

#[no_mangle]
pub extern fn tor_mathlog(d: libc::c_double) -> libc::c_double {
  d.ln()
}
