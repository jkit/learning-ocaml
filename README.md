# Notes On Learning Ocaml / Reason

## 00-hello-world
Build an executable from a single OCaml source file.

## 01-hello-world-reasonml
Build an executable from a single Reason source file.

When I name my Reason file with a `.re` extension, JBuilder just worked--I
didn't need to change in configurations in `jbuild`.

## 02-mix
Mixing OCaml and Reason files worked seamlessly with no extra configuration.

## 03-file-to-lib
To create a library from the files in `lib`, I created a simple `lib/jbuild`
file.

## 04-move-entry-into-bin
I moved `printer.re` into `./bin`.

To make this build, I created an empty `hello.opam` file and added a
`public_name` to `./bin/jbuild`.

## 05-simple-test
A simple test using OUnit.

## 06-multiple-test-files
Running tests from multiple files with one command.

## 07-tests-with-better-failures
Print more information error messages by using `msg` and `printer` options of
`assert_equal`.

## 08-expect-test
A simple test using Jane Street's `ppx_expect`.

## 09-expect-tests-subdir
Move test into a subdirectory.

## 10-expect-test-reason
Work in progress ...
