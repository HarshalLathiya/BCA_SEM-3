#include<iostream.h>
#include<conio.h>
//write a c++ program to print vowel character
void fun(char latter[5])
{
	int count=0;
	for(int i=0;i<10;i++)
	if(latter[i]=='a'||latter[i]=='e'||latter[i]=='i'||latter[i]=='o'||latter[i]=='u')
	{
	cout<<endl<<"This is Vowel latter:"<<latter[i];
	count += 1;
	}
	cout<<endl<<"Total vowel count is:"<<count;
}
void main()
{
	clrscr();
	char latter[5];
	cout<<endl<<"Enter name:";
	cin>>latter;
	fun(latter);
	getch();
}