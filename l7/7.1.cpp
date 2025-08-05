#include<stdio.h>
struct students{
	int roll;
	char name[40];
	char faculty[40];
};
int main()
{
	struct students std= {1, "Palistha", "BCA"};
	printf("Roll: %d\nName: %s\nFaculty: %s", std.roll, std.name, std.faculty);
	return 0;
}
