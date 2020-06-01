#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<string> word{"hi","hi","bye","good","my","my","hello"};
	for(int i=0;i<word.size();i++)
	{
		for(int j=0;j<word.size();j++)
		{
			if(i == j)
			    continue;
		    if(word[i] == word[j])
		    {
		    	word.erase(word.begin()+j);
		    }
		}	
	}
	sort(word.begin(),word.end(),greater<>());
	for(auto i:a)
	{
		cout<<i<<" ";
	}
}