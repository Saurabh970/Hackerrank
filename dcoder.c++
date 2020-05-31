#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int testcase,count,admires=0,k,i,n;
  cout<<"testcases: ";
  cin>>testcase;
  for(k=1;k<=testcase;k++)
  {
    count = 0;
    admires = 0;
    cout<<"no of dcoders: ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
      arr[i] = 0;
      arr[i] = i+1;
    }
    for(i=0;i<n;i++)
    {
    	count = 0;
      for(int j=0;j<n;j++)
      {
        if(i == j)
           continue;
        else if(arr[j]%arr[i] == 0)
           count++;
      }
      cout<<"count for dcoder "<<arr[i]<<" is "<<count<<endl;
      if(count %2 != 0)
         admires++;
    }
    cout<<"admires for testcase "<<k<<" is "<<admires<<endl;
  } 
}