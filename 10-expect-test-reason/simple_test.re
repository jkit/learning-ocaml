[%%expect_test
  let "addition" = {
    Printf.printf "%d" (1 + 2);
    [%expect {| 4 |}]
  }

];
