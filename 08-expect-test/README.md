# Notes

opam install -y core ppx_expect 

This installs version numbers of 113.33.xx, I think this is because I'm
running ocaml 4.02.3 instead of ocaml 4.03.xx. If I were running a newer
version of ocaml, I suspect I'd get v0.9.x of the Janestreet libraries. But,
ReasonML seems to require ocaml 4.02.3.

expect_test_helpers requires 4.03.0

Let's try installing 4.03.0 because https://github.com/facebook/reason
suggests that version.

```
opam switch 4.03.0
eval `opam config env`
opam install -y reason utop core ppx_expect
opam install -y expect_test_helpers
```

# To Run

```
$ jbuilder runtest
```

To build and run manually:

```
$ jbuilder build runner.exe
$ _build/default/runner.exe  inline-test-runner tests -diff-cmd diff -show-counts
```
