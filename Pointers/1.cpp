#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
  char a='f';
  char *b ;
  /*cout<<"Address of a is "<<&a<<endl;
  cout<<"Value of b is "<<b<<endl;
  cout<<"Value of a is "<<a<<endl;
  cout<<"Value b is pointing to "<<*b<<endl; */
  b=&a;
  cout<<endl<<*b<<endl;
  printf("%p \n", b);
  printf("%p \n", &a);

  /*char *c = new char[3];
  cout<<"Address of c is "<<c<<endl;
  cout<<"Address of c+1 is "<<c+1<<endl;
  cout<<"Address of c+2 is "<<c+2<<endl; */

  return 0;
}
