open OUnit;

let suite = "Test Suite" >:::
[
  "Hello" >:: fun () => {
    assert_equal "Hello, world!" Mylib.Message.message
  },
];
