open OUnit;

let suite = "Test Suite" >:::
[
  "Trivial test" >:: fun () => {
    assert_equal true true
  },

  "Test dependencies" >:: fun () => {
    assert_equal "Hello, world!" Mylib.Message.message
  },
];

let _ = run_test_tt suite;
