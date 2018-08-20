#include <iostream>
#include<string.h>

using namespace std;

int main()
{
  char c[5];
  c[0]='A';
  c[1]='N';
  c[2]='U';
  c[3]='J';
  c[4]='\0';
  puts(c);
  cout<<endl<<strlen(c)<<endl;

  char d[5]="ANUJ";
  char *b;
  b=d;
  cout<<*b<<endl;
  puts(d);

  char *x = new char(5);
  *x = 'D';
  cout<<x[0];
  return 0;
}
