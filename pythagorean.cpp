#include<iostream>
#include<vector>
#include<utility>
#include<cmath>
using namespace std;
void pairs(int n)
{
	vector<pair<int,int>> result;
	int limit = sqrt(n);
	for(int a=0;a<=limit;a++)
	{
		for(int b=a;b<=limit;b++)
		{
			if(((a*a)+(b*b)) == n)
			{
				result.push_back(make_pair(a,b));
			}
		}
	}
	for(auto i:result)
	{
		cout<<"("<<i.first<<","<<i.second<<")"<<" ";
	}
	 cout<<endl;
	
}
int main()
{
	int t;
	cin>>t;
	int n[t];
	for(int i=0;i<t;i++)
	{
		cin>>n[i];
	}
	for(int i=0;i<t;i++)
	{
		pairs(n[i]);
	}
	
	
}