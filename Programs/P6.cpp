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
