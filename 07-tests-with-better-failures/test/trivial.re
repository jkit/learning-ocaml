open OUnit;

let suite = "Test Suite" >:::
[
  "Trivial test" >:: fun () => {
    assert_equal 1 2 msg::"The value is wrong" printer::string_of_int
  },
];
