open OUnit;

let suite = "Test Suite" >:::
[
  "Trivial test" >:: fun () => {
    assert_equal true true
  },
];
