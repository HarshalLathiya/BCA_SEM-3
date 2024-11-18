#include <iostream.h>
#include <conio.h>
//write a c++ program for making inline function outside of the class
class MyClass 
{
    public:
    void printMessage(); 
};

inline void MyClass::printMessage()
{
    cout << "Hello outside inline function" <<endl;
}

void main()
 {
     clrscr();
     MyClass obj;
     obj.printMessage();
     getch();
}