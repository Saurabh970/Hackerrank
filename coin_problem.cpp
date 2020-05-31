#include<iostream>
using namespace std;

int coin(int cost)
{
	int count = 0;
	while(cost>0)
	{
		if(cost-2000>=0)
		{
			cost -= 2000;
			count++;
		}
		else if(cost-500>=0)
		{
			cost -= 500;
			count++;
		}
		else if(cost-200>=0)
		{
			cost -= 200;
			count++;
		}
	     else if(cost-100>=0)
		{
			cost -= 100;
			count++;
		}
		else if(cost-50>=0)
		{
			cost -= 50;
			count++;
		}
		else if(cost-20>=0)
		{
			cost -= 20;
			count++;
		}
		else if(cost-10>=0)
		{
			cost -= 10;
			count++;
		}
		else if(cost-5>=0)
		{
			cost -= 5;
			count++;
		}
		else if(cost-2>=0)
		{
			cost -= 2;
			count++;
		}
		else if(cost-1>=0)
		{
			cost -= 1;
			count++;
		}
	}
	return count;
}

int main()
{
	int n;
	cin>>n;
	cout<<coin(n);
	return 0;
}