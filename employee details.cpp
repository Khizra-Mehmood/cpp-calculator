/*Create a class called 'EMPLOYEE' that has EMPCODE and EMPNAME as data members.  
Member function getdata( ) to input data & display( ) to output data.
Write a main function.Create 3 EMPLOYEE objects. Accept and display the details of all employees.*/

#include<iostream>
#include<string>
using namespace std;
class EMPLOYEE
{
	private:
		int EMPCODE;
		string EMPNAME;
		public:
			void getdetails()
			{
				cout<<" Enter the Employee CODE: ";
				cin>>EMPCODE;
				cout<<" Enter the Employee NAME:  ";
				cin.ignore();
			getline(cin, EMPNAME);
			}
			void  display()
			{
				cout<<" EMPLOYEE CODE: "<< EMPCODE<<endl;
				cout<<" EMPLOYE NAME: "<< EMPNAME<< endl;
			}
	};
	int main()
{
const int numemployee=3;
EMPLOYEE employee[numemployee]	;
for( int i=0; i<numemployee; i++)
{
	cout<<" Enter details of the employee "<<(i+1)<< ": "<<endl;
	employee[i].getdetails();
	cout<<endl;
}
  system("cls");
  cout<<"                   ==> The details of Employees is HERE <== \n ";
  for( int i=0; i<numemployee; i++)
  
  {
  	cout<<" Detail of Empolyee no:"<<(i+1)<<" is: "<<endl;
  	employee[i].display();
  	cout<<endl;
  }
return 0;
}