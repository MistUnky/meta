#include <stdio.h>
#include <stdbool.h>
#define MAP_SZ 2323//2323
int p = 0;
int map[MAP_SZ];
bool io_allow_nop = true;
main()
{
	srand(23);
	while(true)
	{
		switch(getchar() % 4) {
			case 0: p = map[p]; io_allow_nop = true; break;
			case 1: if(map[p] != MAP_SZ-1) map[p]++; io_allow_nop = true; break;
			case 2: if(map[p] != 0) map[p]--; io_allow_nop = true; break;
			case 3: if(io_allow_nop) { putchar(map[p]%256); fflush(stdout); io_allow_nop = false; } break;
		}
	}
}
