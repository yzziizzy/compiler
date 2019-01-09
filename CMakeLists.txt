project("Compiler")

set(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -Wimplicit-int -Wincompatible-pointer-types")

add_executable(compiler 
	src/main.c 
	src/bnf.c
	src/ds.c
	src/re.c
)
