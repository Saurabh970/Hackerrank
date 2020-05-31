#include<iostream>
using namespace std;
unsigned long long int dp[1000000];
unsigned long long int fib(int n)
{
	dp[1] = 0;
	dp[2] = 1;
	for(int i = 3; i<=n;i++)
	{
		dp[i] = dp[i-1] + dp[i-2];
	}
	return dp[n];
}
int main()
{
	int n;
	cout<<"Enter a number to which you want fibonaaci numbers: ";
	cin>>n;
    cout<<fib(n);
    //fib(n);
//    for(int i = 1;i<=n;i++)
//    {
//    	cout<<dp[i]<<" ";
//    }
}