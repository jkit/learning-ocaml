# Notes

Print more information error messages by using `msg` and `printer`:

```
assert_equal 1 2 msg::"The value is wrong" printer::string_of_int
```

# To Run

```
$ jbuilder runtest
```

Or, if no files have changed since you last ran the above command, you can try

```
$ _build/default/test/tests.exe
```
