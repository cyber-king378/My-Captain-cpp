#include<iostream>
using namespace std;

int main()
{
  int arr[5],i,*p;
  cout<<"Enter elements:";
  for(i=0;i<5;i++)
  cin>>arr[i];

  p = arr;
  cout<<"You entered:";
  for(i=0;i<5;i++)
  {
      cout<<*p<<" ";
      p++;
  }

return 0;
}