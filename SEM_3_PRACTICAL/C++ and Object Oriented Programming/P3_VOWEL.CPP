#include<iostream.h>
#include<conio.h>
void vowel()
{
	char inputStr[255],outputStr[10];
	int index=0,flag=0,count=0;
	cout<<"Enter a String:";
	cin>>inputStr;
	while(inputStr[index]!='\0')
	{
		if(inputStr[index]=='a'||inputStr[index]=='e'||
		   inputStr[index]=='i'||inputStr[index]=='o'||
		   inputStr[index]=='u'||inputStr[index]=='A'||
		   inputStr[index]=='E'||inputStr[index]=='I'||
		   inputStr[index]=='O'||inputStr[index]=='U')
		{
			for(int j=0;j<10;j++)
			{
				if(inputStr[index]==outputStr[j])
				{
					flag=1;
					break;
				}
				else
				{
					flag=0;
				}
			}
			outputStr[index]=inputStr[index];
			if(flag==1)
			{
				count++;
			}
			else
			{
				cout<<inputStr[index]<<" ";
				count++;
			}
		}
		index++;
	}
	cout<<endl<<"Total Vowel in string :"<<count;
}
void main()
{
	clrscr();
	vowel();
	getch();
}