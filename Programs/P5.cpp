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
