#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxToys(vector<int> price,int k)
{
	long long int result = 0;
	int count = 0;
	sort(price.begin(),price.end());
	for(auto it:price)
	{
		if((result + it) <= k)
		{
			result += it;
			count++;
		}
		else
		{
			continue;
		}
	}
	return count;
}
int main()
{
	int n,k;
	cin>>n>>k;
	vector<int> price(n);
	for(int i=0;i<n;i++)
	{
		cin>>price[i];
	}
	int result = maxToys(price,k);
	cout<<result<<endl;
	return 0;
	
}