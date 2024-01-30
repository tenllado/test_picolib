#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *ptr;
	int i;


	for (i = 0; i < 10; i++) {
		size_t s = 2 << (10 + i);
		printf("Allocating %lld bytes on heap...", (long long) s);

		ptr = malloc(s);
		if (!ptr) {
			perror("malloc");
			return EXIT_FAILURE;
		}
		printf("done!\n");

		printf("Seting the buffer to 0...");
		memset(ptr, 0, s);
		printf("done!\n");

		printf("Freeing the memory...");
		free(ptr);
		printf("done!\n");
	}

	return 0;
}
