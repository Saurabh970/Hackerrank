#include<iostream>
using namespace std;
int main()
{
	unsigned long long int dp[100];
	int n;
	cin>>n;
	dp[0] =1;
	dp[1] =1;
	for(int i = 2;i<=n;i++)
	{
		dp[i] = dp[i-1] * i;
	}
	cout<<dp[n];
}