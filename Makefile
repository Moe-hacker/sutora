all:
	cc -fsanitize=address -g src/*.c
format:
	clang-format -i src/*.c src/include/*.h