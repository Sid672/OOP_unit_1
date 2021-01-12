# OOP_unit_1
It includes programs of unit 1 in OOP 2nd year of SPPU.

## Program no.1:
```C++
/*Prints Hello world!*/
#include<iostream>
using namespace std;
int main()
{
   cout<<"Hello world!"<<endl;
   return 0;
}
```
[Code link](https://repl.it/@Siddharthsing13/Program-1#main.cpp)

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
[Code Link](https://repl.it/@Siddharthsing13/Program-2#main.cpp)

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
[Code Link](https://repl.it/@Siddharthsing13/Program-3#main.cpp)

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
[Code Link](https://repl.it/@Siddharthsing13/Program-4#main.cpp)

## Program 5:
To create user define type name enum is used.

![](https://media.giphy.com/media/NUBp5KcV0PJBe/giphy.gif)

Enumerated type (enumeration) is a user-defined data type which can be assigned some limited values. These values are defined by the programmer at the time of declaring the enumerated type.

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Enum-In-C.png)

This image of C program is same for C++ program also.

```C++
/*Program for using enum*/
#include<iostream>
using namespace std;

int main()
{
  enum numbers{small, middle = 5, large} a,b;
  a = middle;
  b = large;
  cout<<"a = "<<a<<"\n";
  cout<<"b = "<<b<<"\n";
  return 0;
}
```
[Code Link](https://repl.it/@Siddharthsing13/Program-5#main.cpp)

## Program 6:
An array in C or C++ is a collection of items stored at contiguous memory locations and elements can be accessed randomly using indices of an array. They are used to store similar type of elements as in the data type must be the same for all elements.

![](https://media.giphy.com/media/tcHgl5KBmBnW/giphy.gif)
![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2015/05/Arrays.png)

```C++
/*Program to store elements in array by 2 methods*/
#include<iostream>
using namespace std;

int main()
{
  //method 1:
  int a[] = {10, 20, 30, 40, 50};
  
  //method 2:
  int n;
  cout<<"How many elements are there in array?\n";
  cin>>n;
  int b[n];
  //loop for input:
  for (int i = 0; i < n; i++)
  {
    cout<<"Enter element: ";
    cin>>b[i];
  }
  //loop for output:
  cout<<"By method 1:\n";
  cout<<"array is {10, 20, 30, 40, 50}\n";
  for (int i = 0; i < 5; i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<"\nBy method 2:\n";
  for (int i = 0; i < n; i++)
  {
    cout<<b[i]<<" ";
  }
  cout<<"\n";
  return 0;
}
```
[Code Link](https://repl.it/@Siddharthsing13/Program-6#main.cpp)

## Program 7:
![](https://media.giphy.com/media/3o6MbmXIt1qUsNzfu8/giphy.gif)
![](https://www.mathsisfun.com/algebra/images/matrix-addition.gif)
```C++
/*Program of addition of two matrix of same order*/
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter order of matrix: ";
  cin>>n;
  int a[n][n], b[n][n], c[n][n];
  cout<<"Enter elements in matrix A: \n";
  /*enter input in this form:
  a1 a2 a3
  a4 a5 a6
  a7 a8 a9  this is for 3*3 martix */
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin>>a[i][j];
    }
  }
  cout<<"Enter elements in matrix B: \n";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin>>b[i][j];
    }
  }
  cout<<"Addition of matrix: \n";
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      c[i][j] = a[i][j] + b[i][j];
      cout<<c[i][j]<<" ";
    }
    cout<<"\n";
  }
  /*We can also print output by use another for loop
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout<<c[i][j]<<" ";
    }
    cout<<"\n";
  }
  But I am not intrested in using another loop.
  */
  return 0;
}
```
[Code Link](https://repl.it/@Siddharthsing13/Program-7#main.cpp)

## Program 8:
![](https://media.giphy.com/media/odhu1upQGmmNq/giphy.gif)
![](https://d2h0cx97tjks2p.cloudfront.net/blogs/wp-content/uploads/sites/2/2019/06/Syntax-of-C-Class.jpg)
```C++
/* Program to demonstrate the class, access specifiers, data and member functions*/
#include<iostream>
using namespace std; 

//class
class Test
{
  //if we don't use private keyword 
  //class  by default store data in private
  private:
          //data members
          int a, b, c;
  public:
         //member functions.
         int Add(int a, int b)
         {
           c = a + b;
           return c;
         }

         void display()
         {
           cout<<"Sum = "<<c<<endl;
         }
};

int main()
{
  Test obj;
  //access is specific to only public part
  obj.Add(5, 2);
  obj.display();
  return 0;
}
```
[Code Link](https://repl.it/@Siddharthsing13/Program-8#main.cpp)
## Program 9:
![](https://media.giphy.com/media/7yQgwmG4jmDOl0QrRa/giphy.gif)
```C++
/*Program to check the largest number*/
#include<iostream>
using namespace std;

class large
{
  private:
          //data members
          int a, b;
  public:
          //function to take input
          void get()
          {
            cout<<"Enter numbers:"<<"\n";
            cin>>a>>b;
          }
          //function to check number
          void check()
          {
            if (a > b)
            {
              cout<<a<<" is greater than "<<b<<endl;
            }
            else if (b > a)
            {
              cout<<b<<" is greater than "<<a<<endl;
            }
            else
            {
              cout<<"Both are equal"<<endl;
            }
          }
};

int main()
{
  large obj;
  obj.get();
  obj.check();
  return 0;
}
```
[Code Link](https://repl.it/@Siddharthsing13/Program-9#main.cpp)

## Program 10:
![](https://media.giphy.com/media/3oEjI4MMUuv9TZwXCM/giphy.gif)
```c++
/*Program to check if the number is prime or not*/
#include<iostream>
using namespace std;

class test
{
  int n;
  public:
        void get()
        {
          cout<<"Enter a number: ";
          cin>>n;
        }
        void check()
        {
          int flag = 1;
          for (int i = 2; i < n; i++)
          {
            if (n % i == 0)
            {
              flag = 0;
            }
          }

          if (n == 1)
          {
            cout<<"Neither prime nor composite"<<endl;
          }
          else if (flag == 1)
          {
            cout<<n<<" is prime"<<endl;
          }
          else
          {
            cout<<n<<" is composite"<<endl;
          }
        }
};

int main()
{
  test obj;
  obj.get();
  obj.check();
  return 0;
}
```
[Code Link](https://repl.it/@Siddharthsing13/Program-10#main.cpp)

## Program 11:

![](https://media.giphy.com/media/6jvpwSCrCzsOc/giphy.gif)

