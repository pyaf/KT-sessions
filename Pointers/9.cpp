#include <iostream>

using namespace std;
int *multiply(int *a, int *b)
{
  int m;
  m = (*a)*(*b);
  //cout<<m<<endl
  return (&m);
}
int *add(int *a, int *b)
{
  int m;
  m = (*a)+(*b);
  //cout<<m<<endl;
  return (&m);
}

int main()
{
  int a, b;
  a=5;
  b=8;
  int *c = add(&a, &b);
  int *d = multiply(&a, &b);
   cout<<*c<<endl;
   cout<<*d<<endl;
  return 0;
}
