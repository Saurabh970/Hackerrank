#include<iostream>
#include<climits>
using namespace std;
int min_coin(int a[],int size,int cost)
{
	int dp[1000000] = {0};
	for(int i = 1;i<=cost;i++)
	{
		dp[i] = INT_MAX;
		for(int j = 0;j<size;j++)
		{
			if(i - a[j] >= 0)
			{
			      int sub_res = dp[i - a[j]];
			      dp[i] = min(dp[i],sub_res+1);
			}
		}
	}
	return dp[cost];
}
int main()
{
	int arr[] = {1,2,5,10,20,50,100,200,500,2000};
	int size = sizeof(arr)/sizeof(arr[0]);
	int cost;
	cin>>cost;
	cout<<min_coin(arr,size,cost);
}