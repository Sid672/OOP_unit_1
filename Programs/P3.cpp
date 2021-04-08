/*Program that uses structure for defining the collection of the members of diff. data type*/
#include<iostream> 
using namespace std;

struct student
{
  //members of structure: 
  //typically say : data members
  int roll_no;
  char name[10];
  float marks;
}
//Structure tag
stud;

int main()
{
  cout<<"Enter roll no. : ";
  //Using structure tag and point operator we can access members
  cin>>stud.roll_no;
  cout<<"Enter name : ";
  cin>>stud.name;
  cout<<"Enter marks: ";
  cin>>stud.marks;
  cout<<"\nStudent records\n";
  cout<<"ROLL no."<<"\t"<<"Name"<<'\t'<<"Marks\n";
  cout<<"-----------------------------------------\n";
  cout<<stud.roll_no<<"\t\t"<<stud.name<<"\t"<<stud.marks<<"\n";
}
