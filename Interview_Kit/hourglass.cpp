#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findMaximumHourGlass(vector<vector<int>> arr)
{
	int sum;
	vector<int> count;
	for(int i=0;i<=3;i++)
	{
		for(int j=0;j<=3;j++)
		{
			sum = 0;
			for(int p=j;p<=j+2;p++)
			{
				sum += arr[i][p];
				sum += arr[i+2][p];
			}
			sum += arr[i+1][j+1];
			count.push_back(sum);
		}
	}
	int max = *max_element(count.begin(),count.end());
	return max;
}
int main()
{
	vector<vector<int>> arr(6);
	for(int i=0;i<6;i++)
	{
		arr[i].resize(6);
		for(int j=0;j<6;j++)
		{
			cin>>arr[i][j];
		}
	}
   int result = findMaximumHourGlass(arr);
   cout<<result<<endl;
}