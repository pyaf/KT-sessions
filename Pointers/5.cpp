#include <iostream>

using namespace std;

void abc(int *a)
{
  int size = sizeof(a)/sizeof(a[0]);
  cout<<sizeof(a)<<endl;
}

int main()
{
  int a[6];
  for(int i=0;i<6;i++)
  {
    a[i]=i;
  }
  abc(a);
  return 0;
}
