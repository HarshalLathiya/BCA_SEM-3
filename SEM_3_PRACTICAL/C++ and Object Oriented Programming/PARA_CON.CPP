#include<iostream.h>
#include<conio.h>
//Write a C++ program to use constructor
class sy
{
	private:
	int a;
	public:
   sy(int ex=0)//default value constructor ,parameterized constructor
  {
	//cin>>ex;
	a=ex;
  }
  void show()
  {
  cout<<endl<<"Hello BCA:"<<a;
  }
};
void main()
{
	clrscr();
	sy obj(10),obj2;
	obj.show();
	obj2.show();
	getch();
}