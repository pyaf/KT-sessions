#include <iostream>

using namespace std;

int main()
{
  int a = 1026; //100 00000001;
  int *p;
  p = &a;
  char *p0;
  p0 = (char*)p;
  cout<<"Address of p is "<<p<<endl;
  printf("%p \n", p0);
  cout<<"Value of p is "<<*p<<endl;
  cout<<"Value of p0 is "<<(int)*p0<<endl;
  return 0;
}
