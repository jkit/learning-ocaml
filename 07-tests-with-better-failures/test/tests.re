open OUnit;

let suites = "Suites" >:::
[
  Trivial.suite,
  Message.suite,
];
let _ = run_test_tt suites;
