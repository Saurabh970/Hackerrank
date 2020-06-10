#include<iostream>
#include<string>
#include<ios>
#include<limits>
using namespace std;
string twoStrings(string s1,string s2)
{
	int flag = 0;
	for(int i=0;i<s1.length();i++)
	{
		size_t found = s2.find(s1[i]);
		if(found != string::npos)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	{
		return "YES";
	}
	else{
		return "NO";
	}
}

int main()
{
	int p;
	cin>>p;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	while(p > 0)
	{
		string s1;
		getline(cin,s1);
		string s2;
		getline(cin,s2);
		string result = twoStrings(s1,s2);
		cout<<result<<"\n";
		p--;
	}
}