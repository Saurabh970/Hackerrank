#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main()
{
	vector<pair<long long int,int>> players;
	long long int reg_no,result;
	long int round;
	int score,max = 0;
	int flag;
	cin>>round;
	for(int i=0;i<round;i++)
	{
		flag = 0;
		cin>>reg_no;
		cin>>score;
		for(int j=0;j<players.size();j++)
		{
			if(players[j].first== reg_no)
			{
				players[j].second += score;
				flag = 1;
			}
		}
		if(flag == 0)
		{
		players.push_back(make_pair(reg_no,score));
		}
	}
		for(int j=0;j<players.size();j++)
		{
			if(players[j].second>max)
			{
				max = players[j].second;
				result = players[j].first;
			}
		}
		cout<<endl;
		cout<<result;
}