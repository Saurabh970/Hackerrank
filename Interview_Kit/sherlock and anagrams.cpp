#include <iostream>
#include <string.h>
#include <map>
#include <algorithm>
using namespace std;
int anagrams(string s)
{
	map<string, int> freq;
	int result = 0;
	int n = s.length();
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			string sub = s.substr(i, j);
			sort(sub.begin(), sub.end());
			freq[sub]++;
		}
	}
	for (auto it : freq)
	{
		result += (it.second*(it.second-1))/2;
	}
	return result;
}
int main()
{
	int t;
	cin >> t;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	while (t)
	{
		string s;
		getline(cin, s);
		int result = anagrams(s);
		cout << result << endl;
		t--;
	}
	return 0;
}