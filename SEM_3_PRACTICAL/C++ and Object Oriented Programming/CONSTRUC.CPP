#include<iostream.h>
#include<conio.h>
//Write a C++ program to use constructor
class sy
{
	private:
	int a;
	public:
   sy()//constructor
  {
	a=11;
  }
  void show()
  {
  cout<<"Hello BCA:"<<a;
  }
};
void main()
{
	clrscr();
	sy obj;
	obj.show();
	getch();
}