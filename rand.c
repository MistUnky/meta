#include <stdio.h>
main() {
	srand(23);
	while(1)
		putchar(rand()%256);
}
