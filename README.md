# OOP_unit_1
To make study more intresting!
It includes programs of unit 1 in OOP 2nd year.

## Program no.1:
```C++
/*Prints Hello world!*/
#include<iostream>
using namespace std;
int main()
{
   cout<<"Hello world!<<endl;
   return 0;
}
```
![](https://media.giphy.com/media/MeJgB3yMMwIaHmKD4z/giphy.gif)
## Program no.2:
![](https://www.onlinemathlearning.com/image-files/polar-rectangular-coordinates.png)
```C++
/*Program to covert polar to rectangular coordinate system*/
#include<iostream>
#include<math.h>
#define PI 3.1415
using namespace std;

//void function can also declare here but it is important to
//show your main code at the top
//so  int main() 1st then void func.

int main()
{
   double r, angle;
   void PoltoRec(double, double);
   cout<<"Enter radius: ";
   cin>>r;
   cout<<"Enter angle in Degree: ";
   cin>>angle;
   PoltoRec(r, angle);
   return 0;
}

void PoltoRec(double r, double angle)
{
  double x, y;
  x = r * cos(angle * PI/ 180);
  y = r * sin(angle * PI/ 180);
  cout<<"x : "<<x<<"\n";
  cout<<"y : "<<y<<"\n";
}
```
## Program no.3:
![](https://media.geeksforgeeks.org/wp-content/uploads/20190711111618/Structure-In-CPP.jpg)

### Structures in C++ can contain two types of members:
1) Data Member: These members are normal C++ variables. We can create a structure with variables of different data types in C++.
2) Member Functions: These members are normal C++ functions. Along with variables, we can also include functions inside a structure declaration.
```C++
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
```
## Program 4:
Basically struct is used to define a structure. But when we want to use it we have to use the struct keyword in C++. If we use the typedef keyword, then a new name, we can use the struct by that name, without writing the struct keyword.

![](https://qphs.fs.quoracdn.net/main-qimg-29d5758a788b5325e85d8dc11cac46f9.webp)

##### He is - ....................ChinnaSwami MutuSwami VenuGopala Iyer.
##### That is why we use typedef
Typedef are also like nick names provided to data types.
```C++
/*Program to represent two complex numbers and addition of complex numbers*/
#include<iostream>
using namespace std;

//typedef: used to give name  
typedef struct complex
{
  float real;
  float img;
}
//tag
C;

int main ()
{
  //By using typedef we give new name
  // like C name is now x, y, z also.
  C x, y, z;
  cout<<"Enter real part of first complex no. : ";
  cin>>x.real;
  cout<<"Enter imaginary part of first complex no. : ";
  cin>>x.img;
  cout<<"Enter real part of second complex no. : ";
  cin>>y.real;
  cout<<"Enter imaginary part of second complex no. : ";
  cin>>y.img;
  cout<<"First complex no. : "<<x.real<<" + "<<x.img<<"i\n";
  cout<<"Second complex no. : "<<y.real<<" + "<<y.img<<"i\n";
  z.real = x.real + y.real;
  z.img = x.img + y.img;
  cout<<"Additon of complex no. is\n";
  cout<<z.real<<" + "<<z.img<<"i\n";
  return 0;
}
```
