# Notes

After moving the tests into a subdirectory, I had to add a `chdir` to
`./test/jbuild`.

```
(action
  (chdir ${ROOT}
    (run ${<} inline-test-runner tests -diff-cmd diff -show-counts)))))
```

# To Run

```
$ jbuilder runtest
```
