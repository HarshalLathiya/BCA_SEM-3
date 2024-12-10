#include <iostream.h>
#include<conio.h>
class bca
{
	public:
	int num,sum,rev;
	void fun();
	private:
	bca reverseNumber(bca temp)
	{
		temp.rev=temp.num%10;
		temp.sum=(temp.sum*10)+temp.rev;
		temp.num=temp.num/10;
		return temp;
	}
};
	void bca::fun()
	{
	 bca obj2;
	 int value;
	 cout<<"Enter a Number:";
	 cin>>obj2.num;
	 obj2.sum=0;
	 value=obj2.num;
	 while(obj2.num!=0)
	 {
	       obj2=reverseNumber(obj2);
	 }
	 cout<<"Revrese number is:"<<obj2.sum;
	 if(value==obj2.sum)
	 {
		cout<<endl<<"This is palindrome";
	 }
	 else
	 {
		cout<<endl<<"This is not palindrome";
	 }
	}
void main()
{
	clrscr();
	bca obj;
	obj.fun();
	getch();
}
