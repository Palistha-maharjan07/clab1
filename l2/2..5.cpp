#include<stdio.h>
int main()
{
	int BD, BM, BY, CD, CM, CY, years_lived, days_lived, leap_days;
	printf("Enter your date of birth (YYYY MM DD):");
	scanf("%d %d %d", &BY, &BM, &BD);
	printf("Enter the current date (YYYY MM DD):");
	scanf("%d %d %d", &CY, &CM, &CD);
	years_lived= CY-BY;
	leap_days= years_lived/4;
	days_lived= (years_lived*365)+ (CD-BD)+ leap_days;
	if(CM<BM)
	{
		days_lived-=30;
	}
	else if(CM>BM)
	{
		days_lived+= 30;
	}
	printf("\n You have lived %d days.\n", days_lived);
	return 0;
}
