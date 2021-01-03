#include <stdio.h>
#define MAP_SZ 2323//2323
int p = 0;
int map[MAP_SZ];
main()
{
	srand(23);
	while(1)
	{
		switch(getchar() % 5) {
			case 0: p = map[p]; break;
			case 1: if(map[p] != MAP_SZ-1) map[p]++; break;
			case 2: if(map[p] != 0) map[p]--; break;
			case 3: putchar(map[p]%256); fflush(stdout); break;
			case 4: 0; break;
		}
	}
}
