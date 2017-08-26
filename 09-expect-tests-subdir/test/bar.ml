let%expect_test "hello" =
  print_string Mylib.Message.message;
  [%expect {| world |}];;

