#include<iostream>
using namespace std;
int main()
{
	int n,i,t_shirts=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
			if((a[i] - 16) >= 0)
			{
			    a[i] -= 16;
			    t_shirts++;
			}
			if((a[i] - 8) >= 0)
			{
				a[i] -= 8;
				t_shirts++;
			}
			if((a[i] - 4) >= 0)
			{
				a[i] -= 4;
				t_shirts++;
			}
			if((a[i] - 2) >= 0)
			{
				a[i] -= 2;
				t_shirts++;
			}
			if((a[i] - 1) >= 0 && a[i] > 0)
			{
				a[i] -= 1;
				t_shirts++;
			}
	}
	cout<<t_shirts;
}