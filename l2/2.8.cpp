#include<stdio.h>
int main()
{
	int x=2, z=4, y;
	y= x++ + ++x;
	printf("a. y=x++ + ++x;\n Result:%d\n\n", y);
	x=2;
	y= ++x + ++x;
	printf("b. y=++x + ++x;\n Result:%d\n\n", y);
	x=2;
	y= ++x + ++x + ++x;
	printf("c. y=++x + ++x + ++x;\n Result:%d\n\n", y);
	x=2;
	y= x>z;
	printf("d. y=x>z;\n Result:%d\n\n", y);
	x=2;
	y= x>z? x:z;
	printf("e. y=x>z? a:z;\n Result:%d\n\n", y);
	x=2;
	y= x&z;
	printf("f. y= x&z; \n Result:%d\n\n", y);
	x=2;
	y= x>>2 + z<<1;
	printf("g. y=x>>2 + z<<1;\n Result:%d\n\n", y);
	return 0;
}
