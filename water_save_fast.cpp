#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int i,j,n,result=0,input;
	int second_highest;
	cin>>n;
	vector<int> a,b;
	for(i=0;i<n;i++)
	 {
	      cin>>input;
	      b.push_back(input);
	 }
	 a = b;
	 
	 sort(a.begin(),a.end());
	 second_highest = a.at(n-2);
	 for(i=1;i<n-1;i++)
	 {
	 	if(second_highest - b.at(i) < 0)
	 	    continue;
	 	result += second_highest - b.at(i);
	 	
	 }
	 cout<<result<<endl;
}