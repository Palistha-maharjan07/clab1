#include<stdio.h>
#include<string.h>
int main()
{
	char test[20], vowel[6]="aeiou";
	int i, l, v=0, c=0;
	printf("Enter a string:");
	scanf("%s", test);
	l=strlen(test);
	printf("\n Lengthof string: %d", l);
	for(i=0; i<l; i++)
	{
		if(strchr(vowel, test[i]))
		{
			printf("\n %c is a vowel.", test[i]);
			v++;
		}
		else
		{
			printf("\n %c is a consonant.", test[i]);
			c++;
		}
	}
	printf("\n\n There are %d vowels.",v);
	printf("\n\n There are %d consonants.",c);
	return 0;
}
