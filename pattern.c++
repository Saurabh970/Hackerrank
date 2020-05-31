#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,i,j,k,numbers =1;
	cin>>n;
	//for upper part pattern
	for(i=1;i<n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			cout<<" ";
		}
		for(k=numbers;k>=1;k--)
		{
			cout<<abs(k-i)+1;
		}
		numbers += 2;
		cout<<endl;
	}
	
	//for middle part one line only
	for(i=1;i<=2*n-1;i++)
	{
		cout<<abs(n-i)+1;
	}
	cout<<endl;
	numbers -= 2;
	
	//for lower part pattern
	for(i=n-1;i>=1;i--)
	{
		for(j=n-i;j>=1;j--)
		{
			cout<<" ";
		}
		for(k=numbers;k>=1;k--)
		{
			cout<<abs(k-i)+1;
		}
		numbers -= 2;
		cout<<endl;
	}
	
}