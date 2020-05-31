#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
map<string,int> wordfrequency(string s)
{
	map<string,int> words;
	stringstream str(s);
	string word;
	while(str>>word)
	{
		words[word]++;
	}
	return words;
}
int main()
{
	int n;
	cout<<"No of words: ";
	cin>>n;
	string str;
	cout <<"Enter String: ";
	getline(cin,str);
	map<string,int> wordcount = wordfrequency(str);
	sort(wordcount.begin(),wordcount.end(),greater<>());
	for(auto &i : wordcount)
	{
		cout<<i.first<<" ";
	}
	
}