#include <iostream>

using namespace std;

int main()
{
  int a;
  int *b;
  int **c;
  int ***d;
  a = 5;
  b = &a;
  c = &b;
  d = &c;
  cout<<"Value of d is "<<*d<<endl;
  cout<<"Address of c is "<<&c<<endl;
  cout<<"Value of c is "<<*c<<endl;
  cout<<"Value of b is "<<b<<endl;
  cout<<"Value of b is "<<*b<<endl;
  cout<<"Address of a is "<<&a<<endl;
  cout<<"Value of a is "<<a<<endl;

  cout<<*b<<endl;
  cout<<*c<<endl;
  cout<<**c<<endl;
  cout<<**d<<endl;
  cout<<***d<<endl;
  ***d = 6;
  *b = **c +2;
  cout<<"a = "<<a<<endl;
  return 0;
}
