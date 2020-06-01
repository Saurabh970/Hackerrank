#include<iostream>
using namespace std;
int main()
{
	int prime[] = {2, 3, 5, 7, 11, 13, 17, 19};
	long int n;
	int count = 0;
	cin>>n;
    for(int j=2;j<=n;j++)
	{
		for(int i=0;i<8;i++)
		{
			if(j % prime[i] == 0)
			{
				count++;
				break;
			}
		}
	}
	cout<<count;
}