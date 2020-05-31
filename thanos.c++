#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<char> st;
	string s;
	char x;
	string result = "";
	cout<<"enter the string:";
	cin>>s;
	
	for(int i=0;i<s.length();i++)
	{
		if(s[i]== '(')
		{
			st.push(s[i]);
			continue;
		}
		else if(s[i]== ')')
		{
			x = st.top();
			st.pop();
			if(x != '(')
			{
				result = "incorrect";
				break;
			}
		}
	}
	
cout<<result;
}