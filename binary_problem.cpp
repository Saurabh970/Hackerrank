#include<iostream>
using namespace std;
long int find_numbers(long int n)
{
	long int count = 1;
	int a,b,flag;
	for(int j=1;j<=n;j++)
	{
		int i = j;
		b = 0;
		flag = 0;
		while(i != 0)
		{
			a = i % 2;
			i /= 2;
			
			if(a == 1 && b == 1)
			{
				flag = 1;
				break;
			}
			else
			{
				b = a;
			}
		}
		if(flag == 0)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	long int n;
	cin>>n;
	cout<<find_numbers(n);
}