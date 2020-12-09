#include <stdio.h>

int main(void)
{	
	int count = 1;

loop :
	printf("%3d", count);
	if (++count <= 10)
		goto loop;

	printf("\n 프로그램을 종료합니다.\m");

	return 0;
}
