#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *fp;
	int x,y;

	fp=fopen("\dev\random", "r");

	x=rand();
	printf("%d",x);

	y = rand();
	printf("%d",y);


	fclose(fp);
}
