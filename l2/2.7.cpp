#include<stdio.h>
#include<math.h>
int main()
{
	int P, n, t;
	float r, CI, A;
	printf("Enter Principle Amount(P):");
	scanf("%d", &P);
	printf("Enter Annual interest rate(r):");
	scanf("%f",&r);
	printf("Enter Number of times interest is compounded a year:");
	scanf("%d",&n);
	printf("Enter the time  money is invested(t):");
	scanf("%d", &t);
	r= r/100;
	A= P*pow((1+r/n), n*t);
	CI= A-P;
	printf("\n the Compount Interest(CI): %.2f", CI);
	return 0;
}
