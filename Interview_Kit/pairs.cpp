#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

//#include<bits/stdc++.h>
using namespace std;
int pairs(vector<long> arr,int k)
{
	int pairs = 0;
	int n = arr.size();
	unordered_set<long> check;
	for(int i=0;i<n;i++)
	{
		if((arr[i] - k)>0)
		{
			int one = arr[i] - k;
			check.insert(one);
		}
	}
	for(int i=0;i<n;i++)
	{
		if(check.find(arr[i]) != check.end())
		{
			pairs++;
		}
	}
	return pairs;
}
int main()
{
	int n,k;
	cin>>n>>k;
	vector<long> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int result = pairs(arr,k);
	cout<<result<<endl;
}