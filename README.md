# C Basics

Small C programs built to get fluent with the language: pointers, the standard library, Makefiles, and unit tests.

## What's inside

- **basics.c / basics.h** — a utility library of math functions (geometry: disk and ring areas, and numeric helpers), covered by `basics_test.c`.
- **caat.c** — a stream filter in the spirit of `cat`: reads stdin character by character and echoes it back with every vowel doubled.

## Build & run

```sh
make            # builds basics_test and caat
./basics_test   # run the tests
echo "hello" | ./caat
```

## Tech

C, Make, clang/gcc
