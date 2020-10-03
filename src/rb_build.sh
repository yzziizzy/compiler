#!/bin/bash

gcc rbtest.c rb.c -o rbtest -O0 -ggdb -lm \
	-Wno-format \
	-Werror=implicit-int \
	-Werror=incompatible-pointer-types

