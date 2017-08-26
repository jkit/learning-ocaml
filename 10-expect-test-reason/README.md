This ticket helped me figure out the Reason syntax for ppx extensions.

https://github.com/facebook/reason/issues/813

I used `refmt` to convert simple_test.ml to Reason:

```
refmt --print re --parse ml simple_test_ml
[%%expect_test
  let "addition" = {
    Printf.printf "%d" (1 + 2);
    [%expect {| 4 |}]
  }
];
```

# To Run

```
$ jbuilder runtest
```
