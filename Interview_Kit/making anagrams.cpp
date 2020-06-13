#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;
int makeAnagrams(string a,string b)
{
	int count = 0;
	vector<int> occurence(26,0);
	for(auto char_a:a)
	{
		++occurence[char_a - 'a'];
	}
	for(auto char_b:b)
	{
		--occurence[char_b -'a'];
	}
	for(auto it:occurence)
	{
		count += abs(it);
	}
	return count;
		
}
int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	int result = makeAnagrams(a,b);
	cout<<result<<endl;
	return 0;
}