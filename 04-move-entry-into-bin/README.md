# Notes

When I wanted the entry point to be in `./bin`, I had to do two things to get it working:

  1. `touch hello.opam`
  2. Add a `public_name` to `./bin/jbuild`

# Build it

  jbuilder build

# Run it

  _build/default/bin/printer.exe

or

  _build/install/default/bin/psizzle
