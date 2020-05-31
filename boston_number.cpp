#include<iostream>
#include<vector>
using namespace std;

void factors(vector<int>& fact,int n)
{
	while(n>1)
	{
		for(int i=2;i<=n;i++)
		{
			if(n%i == 0)
			{
				n /= i;
				fact.push_back(i);
				break;
			}
		}
	}
}

int sum_of_digits(int n)
{
	int r,sum=0;
	while(n>0)
	{
		r = n % 10;
		sum += r;
		n /= 10;
	}
	return sum;
}
int main()
{
	int n,sum_digit,factors_sum = 0,flag;
	cin>>n;
	vector<int> factor;
	factors(factor,n);
    sum_digit = sum_of_digits(n);
    for(auto it: factor)
    {
    	factors_sum += it;
    }
    if(sum_digit == factors_sum)
       flag = 1;
    else
       flag = 0;
       
     cout<<flag<<endl;
    return 0;
}