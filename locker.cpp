#include<iostream>
#include<cmath>
using namespace std;
int find_second_num(int n)
{
	int result = 0;
	int len = log10(n) +1;
	int arr[len];
    for(int i=len-1;i>=0;i--)
	{
		int r = n%10;
		if(r == 0)
		   continue;
		r += 2;
		if(r == 10)
		   r = 0;
		arr[i] = r;
		n /= 10;
	}
	for(int i=0;i<len;i++)
	{
		result = result*10 + arr[i];
	}
	return result;
}
int main()
{
	int n ;
	cin>>n;
	if(n == 8888 || n<0)
	{
	    cout<<"INVALID INPUT";    
	    exit(0);
	}
	cout<<find_second_num(n);
	return 0;
}