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
