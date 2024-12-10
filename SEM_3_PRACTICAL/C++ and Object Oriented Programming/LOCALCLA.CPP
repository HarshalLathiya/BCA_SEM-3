													   #include<iostream.h>
#include<conio.h>
//Write a C++ program to define local class in memeber function
void lcfun()
{
	cout<<endl<<"Welcome to UDF";
	class sy // local class
	{
		public:
		void show()
		{
			cout<<endl<<"Welcome to member function";
		}
	};
	sy obj;
	obj.show();
}
void main()
{
	clrscr();
	lcfun();
	getch();
}