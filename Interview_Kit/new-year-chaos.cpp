#include<iostream>
#include<vector>
using namespace std;
void minimumBribes(vector<int> q)
{
	int len = q.size();
	int bribes = 0;
	for(int i=len-1;i>=0;i--)
	{
		if(q[i] != i+1)
		{
			if(q[i-1] == i+1)
			{
				q[i-1] = q[i];
				q[i] = i+1;
				bribes++;
			}
			else if(i>=2 && q[i-2] == i+1)
			{
				q[i-2] = q[i-1];
				q[i-1] = q[i];
				q[i] = i+1;
				bribes += 2;
			}
			else
			{
				cout<<"Too chaotic"<<endl;
				return;
			}
		}
	}
		cout<<bribes<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t>0)
	{
		int n;
		cin>>n;
		vector<int> q(n);
		for(int i=0;i<n;i++)
		{
			cin>>q[i];
		}
		minimumBribes(q);
		t--;
	}
}