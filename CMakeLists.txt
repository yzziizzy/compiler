project("Compiler")

set(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -Wimplicit-int -Wincompatible-pointer-types")

add_executable(compiler 
	src/main.c 
	src/bnf.c
	src/lexer.c
	src/re.c
	src/rle.c
	src/sti/sti.c
)
