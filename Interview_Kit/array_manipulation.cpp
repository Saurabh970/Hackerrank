#include<iostream>
#include<vector>
using namespace std;
long arrayManipulation(int n,vector<vector<int>> queries)
{
	long max = 0,temp = 0;
	vector<long int> arr(n,0);
	for(int i=0;i<queries.size();i++)
	{
		int a = queries[i][0];
		int b = queries[i][1];
		int k = queries[i][2];
		arr[a-1] += k;
		if(b<n)
			arr[b] -= k;
	}
	for(int i=0;i<n;i++)
	{
		temp += arr[i];
		if(temp > max)
			max = temp;
	}
	return max;
}
int main()
{
	int n,m;
	cin>>n>>m;
	vector<vector<int>> queries(m);
	for(int i=0;i<m;i++)
	{
		queries[i].resize(3);
		for(int j=0;j<3;j++)
		{
			cin>>queries[i][j];
		}
	}
	long result = arrayManipulation(n,queries);
	cout<<result<<endl;
	return 0;
}