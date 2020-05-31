#include <iostream>
using namespace std;

int main()
{
    int testcase, n, result[testcase], i,j,diff;
    cin>>testcase;
    for(i=0;i<testcase;i++)
    {
      cin>>n;
      int arr[n];
      diff = 0;
      for(int k=0;k<n;k++)
      {
        cin>>arr[k];
      }
      diff = arr[1] - arr[0];
      for(j = 1;j<n;j++)
      {
        if(arr[j]-arr[j-1] != diff)
        {
              result[i] = arr[j];
              break;
        }
      }
    }
    for(i = 0;i<testcase;i++)
    {
      cout <<result[i]<<" ";
    }
}