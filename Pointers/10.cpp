#include <iostream>
#include<string.h>

using namespace std;

void print()
{
  cout
}
int add(int a, int b)
{
  int m;
  m = a + b;
  return (m);
}

int main()
{
  int c;
  int (*p)(int, int);  //vs int *p(int ,int)
  p =&add;  //same as p = add
  c = (*p)(2,3); // same as p(2,3)
  cout<<c<<endl;
  void (*q)();
  q = print;
  q();
  return 0;
}
