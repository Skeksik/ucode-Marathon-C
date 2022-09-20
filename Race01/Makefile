all: part_of_the_matrix

FLAGS := -std=c11 -Wall -Wextra -Werror -Wpedantic -Iinc

part_of_the_matrix:
	clang $(FLAGS) -o part_of_the_matrix src/*.c

clean:
	rm -rf part_of_the_matrix

uninstall:
	rm -rf part_of_the_matrix

reinstall:
	make uninstall
	make

