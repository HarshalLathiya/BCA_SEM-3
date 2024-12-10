#include<iostream.h>
#include<conio.h>
//Write a C++ program for structure
struct student
{
	char student_name[30];
	int admission_no;
	float fee_paid;

}stud1;//define structure variable
void main()
{
	clrscr();
	cout<<endl<<"Enter the Student name:";
	cin>>stud1.student_name;
	cout<<endl<<"Admission Number:";
	cin>>stud1.admission_no;
	cout<<endl<<"Enter fee paid:";
	cin>>stud1.fee_paid;
	cout<<endl<<stud1.student_name;
	cout<<endl<<stud1.admission_no;
	cout<<endl<<stud1.fee_paid;
	getch();
}