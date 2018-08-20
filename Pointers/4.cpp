#include <iostream>

using namespace std;


void abc(int *a)
{
  *a = (*a)*5;
}
int main()
{
  int x=20;
  //Pass By Reference or Value
  abc(&x);
  cout<<x<<endl;

  int a[6];
  cout<<&a[0]<<"  "<<a<<endl;
  cout<<&a[1]<<"  "<<a+1<<endl;
  cout<<&a[2]<<"  "<<a+2<<endl;
  cout<<&a[3]<<"  "<<a+3<<endl;
  cout<<&a[4]<<"  "<<a+4<<endl;
  cout<<&a[5]<<"  "<<a+5<<endl;

  return 0;
}
