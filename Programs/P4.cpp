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
