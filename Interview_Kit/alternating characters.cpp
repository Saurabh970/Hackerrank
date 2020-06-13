#include<iostream>
#include<string>
#include<limits>
#include<ios>
using namespace std;
int alternatingCharacters(string s)
{
	int deletions = 0;
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i] == s[i+1])
		{
			s.erase(s.begin()+i);				deletions++;
			i--;
		}
	}
	return deletions;
}
int main()
{
	int q;
	cin>>q;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	for(int i=1;i<=q;i++)
	{
		string s;
		getline(cin,s);
		int result = alternatingCharacters(s);
		cout<<result<<endl;
	}
	return 0;
}