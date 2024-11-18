#include<stdio.h>
#include<conio.h>
//Write a C program for print ascii value of alphabet
void main()
{
	clrscr();
	char str[27];
	printf("Ascii value of Capital Alphabet\n");
	for(char c='A';c<='Z';c++)
	{
		printf("%c %d\t",c,c);
	}
	printf("\n\n");
	printf("Ascii value of small Alphabet\n");
	for(char s='a';s<='z';s++)
	{
		printf("%c %d\t",s,s);
	}
	getch();
}