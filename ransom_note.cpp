#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	vector<string> magazine,note;
	int m,n,flag;
	cin>>m>>n;
	string word;
	for(int i=0;i<m;i++)
	{
		cin>>word;
		magazine.push_back(word);
	}
	for(int i=0;i<n;i++)
	{
		cin>>word;
		note.push_back(word);
	}
	sort(magazine.begin(),magazine.end());
	sort(note.begin(),note.end());
	for(int j=0;j<n;j++)
	{
		flag = 0;
		for(int k=0;k<magazine.size();k++)
		{
			if(note[j] == magazine[k])
			{
				magazine.erase(magazine.begin()+k);
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			break;
		}
	}
	
	
	if(flag == 0)
	{
		cout<<"No"<<endl;
	}
	else{
		cout<<"Yes"<<endl;
	}
}