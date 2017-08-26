# Notes

Use OUnit for tests.

To build and run tests, run

  jbuilder runtests

If you edit a library file or a test file, you can still simply run `jbuilder
runtests`, without running `jbuilder build`. It knows to rebuild the relevant
files.

Though, if you want to rerun the tests and you have not touched the files,
you'll have to run `_build/default/test/tests.exe`.

