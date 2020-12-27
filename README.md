# OOP_unit_1
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
```C++
/*Program to covert polar to rectangular coordinate system*/
#include<iostream>
#include<math.h>
#define PI 3.1415
using namespace std;

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
![](https://www.onlinemathlearning.com/image-files/polar-rectangular-coordinates.png)
