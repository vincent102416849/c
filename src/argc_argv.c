#include <stdio.h>
/*
	escape characters for argv
	escape space:"
	escape ":\
*/
int main(int argc, char **argv) {
	printf("argc: %d\n", argc);
	int i;
	for (i = 0; i < argc; i++) {
		printf("argv[%d]: %s\n", i, argv[i]);
	}
	return 0;
}
