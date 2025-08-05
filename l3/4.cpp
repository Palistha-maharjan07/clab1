#include<stdio.h>
#include<conio.h>
int main()
{
	int salary, tax, ms, gender;
	printf("Enter your marital status: '1' for married and '2' for unmarried\n");
	scanf("%d",&ms);
	printf("Enter your gender: '1' for male and '2' for female\n");
	scanf("%d",&gender);
	printf("Enter your annual salary:");
	scanf("%d",&salary);
	if(ms==1)
	{
		if(salary>=0 && salary<=450000)
		{
			tax=0.01*salary;
		}
		else if(salary>450000 && salary<=550000)
		{
			tax=4500+0.1*(salary-450000);
		}
		else if(salary>550000 && salary<=750000)
		{
			tax=4500+10000+(salary-550000)*0.2;
		}
		else if(salary>750000 && salary<=1300000)
		{
			tax=4500+10000+40000+(salary-750000)*0.3;
		}
		else if(salary>1300000)
		{
			tax=4500+10000+40000+165000+(salary-1300000)*0.35;
		}
	}
	else
	{
		
		if(salary>=0 && salary<=400000)
		{
			tax=0.01*salary;
		}
		else if(salary>400000 && salary<=500000)
		{
			tax=4000+0.1*(salary-400000);
		}
		else if(salary>500000 && salary<=750000)
		{
			tax=4500+10000+(salary-500000)*0.2;
		}
		else if(salary>750000 && salary<=1300000)
		{
			tax=4500+10000+50000+(salary-750000)*0.3;
		}
		else if(salary>1300000)
		{
			tax=4500+10000+50000+165000+(salary-1300000)*0.35;
    	}
	}
	if(gender==2)
	{
		tax=tax-0.01*tax;
	}
	printf("tax is %d",tax);
	getch();
}
