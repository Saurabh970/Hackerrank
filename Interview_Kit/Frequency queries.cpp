#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<map>
using namespace std;
void frequencyQueries(vector<vector<int>> queries)
{
	int flag;
	map<long,int> arr;
	vector<int> freq;
	for(int i=0;i<queries.size();i++)
	{
		flag = 0;
		int a = queries[i][0];
		int b = queries[i][1];
		if(a == 1)
		{
			arr[b]++;
			freq.push_back(arr[b]);
			int temp = arr[b];
			auto it = find(freq.begin(),freq.end(),temp-1);
			if(it != freq.end())
				freq.erase(it);
		}
		else if(a == 2)
		{
			if(arr[b])
			{
				arr[b]--;
				freq.push_back(arr[b]);
			int temp = arr[b];
			auto it = find(freq.begin(),freq.end(),temp+1);
			freq.erase(it);
			}
			else
			{
				arr[b] = 0;
			}
		}
		else
		{
			if(find(freq.begin(),freq.end(),b) != freq.end())
			{
				cout<<"1"<<endl;
			}
			else
			{
				cout<<"0"<<endl;
			}
		}
	}
}
int main()
{
	int q;
	cin>>q;
	vector<vector<int>> queries(q);
	for(int i=0;i<q;i++)
	{
		queries[i].resize(2);
		for(int j=0;j<2;j++)
		{
			cin>>queries[i][j];
		}
	}
	 frequencyQueries(queries);
	 return 0;
}