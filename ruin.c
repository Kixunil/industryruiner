#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv) {
	if(argc < 2) {
		fprintf(stderr, "Usage: %s FILE\n", argv[0]);
		return 1;
	}

	// TODO: check return values, support files greater than 2 GiB
	int fd = open(argv[1], O_RDONLY);
	off_t fsize = lseek(fd, 0, SEEK_END);
	lseek(fd, fsize / 2, SEEK_SET);
	uint32_t data;
	read(fd, &data, sizeof(data));

	asm(
		"movl\t%0, %%eax\n"
		"LOOP:\n\t"
		"movl\t%%eax, %%ebx\n\t"
		"movl\t%%ebx, %%eax\n\t"
		"jmp\tLOOP\n\t"
		:
		: "r" (data)
		: "%eax", "%ebx"
	);

	return 0;
}
