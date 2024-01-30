#include <stdlib.h>
#include <stdio.h>

#define TESTSIZE 10000

int main(void)
{
	char *ptr;

	ptr = malloc(TESTSIZE);
	if (!ptr) {
		perror("malloc");
		return EXIT_FAILURE;
	}

	memset(ptr, 0, TESTSIZE);
	free(ptr);

	return 0;
}
