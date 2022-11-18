#include <stdio.h>

int main(){
	int x,y,z;

	x = y = 10;
	z = x + 1;
	x = -x;
	y = y + 1;
	x = x + y - (z + 1) - 2 * y;

	printf("x = %d, y = %d, z = %d\n",x,y,z);

	return 0;
}

