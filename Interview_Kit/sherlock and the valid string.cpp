#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;
string isValid(string s)
{
	map<char, int> freq;
	set<int> check;
	for (auto i : s)
	{
		freq[i]++;
	}
	for (auto it : freq)
	{
		check.insert(it.second);
	}
	if (check.size() == 1)
		return "YES";
	if (check.size() == 2)
	{
		int min = *check.begin();
		int max = *check.begin()+1;
		int smin = 0,smax = 0;
		for(auto it:freq)
		{
			if(it.second == min)
				smin++;
			if(it.second == max)
				smax++;
		}
		if(min == 1 && smin == 1)
			return "YES";
		if((max-min) == 1 && smax == 1)
			return "YES";
		return "NO";
	}
	return "NO";
}
int main()
{
	string s;
	getline(cin, s);
	string result = isValid(s);
	cout << result << endl;
	return 0;
}
