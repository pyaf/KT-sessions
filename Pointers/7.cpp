#include <iostream>
#include<string.h>

using namespace std;

int main()
{
 int a[2][3];
 for(int i=0;i<2;i++)
 {
   for(int j=0;j<3;j++)
   {
     a[i][j] = (i+1)*10 + j+1;
   }
 }

 //int *b = a;
  int (*b)[3]=a;
  cout<<&(x)<<" "<<&a[0]<<endl;
  cout<<*a<<" "<<a[0]<<" "<<&a[0][0]<<endl;
  cout<<a+1<<" "<<*a+1<<" "<<a[1]<<" "<<&a[1][0]<<endl;
  cout<<b<<" "<<b+1<<endl;
  cout<<*(a+1)+2<<endl;
  cout<<*(*a +1)<<endl;
  //a[i][j] = *(*(a+i)+j)
  return 0;
}
