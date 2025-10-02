#include <iostream>
#include <iomanip>
#define SIZE 10

using namespace std;

int main(int argc,char *argv[]){
  int *pa, *pb, i, temp, *p;
//int a[SIZE] ={1,2,3,4,5,6,7,8,9,10}; remove
int n;
cout<<"How many numbers?";
cin>>n;
pa= new int[n];
for(i=0; i<n; i++){
  cin>>*pa;
  pa++;
}
pa-=n;


// print veryhing


cout<<"Original: ";
for(i=0; i<n-1; i++){
  cout<<setw(3)<<*pa;
  pa++;
}
cout<<setw(3)<<*pa;
// print reverse
cout<< endl <<"Reverse:  ";
pb=pa;
pa-=(n-1);
for (i=0; i<n/2; i++)
{
  temp = *pa;
  *pa=*pb;
  *pb = temp;
  pa++; pb--;
}
pa -=n/2;
for(i=0; i<n-1; i++){
  cout<<setw(3)<<*pa;
  pa++;
}
cout<<setw(3)<<*pa;

cout<< endl;
pa -=(n-1);
delete []pa;

return 0;
}
