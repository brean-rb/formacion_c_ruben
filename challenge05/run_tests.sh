#!/bin/sh
CC=gcc
CFLAGS="-Wall -Wextra -Werror"

set -e

$CC $CFLAGS -o test_challenge05 suma.c test_challenge05.c
if ./test_challenge05; then
  printf "\033[0;32mPASSED\033[0m\n"
else
  printf "\033[0;31mFAILED\033[0m\n"
fi
