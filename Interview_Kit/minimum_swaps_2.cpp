#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void minimumSwaps(vector<int> arr)
{
	int len = arr.size();
	int swaps = 0;
	for(int i=0;i<len;i++)
	{
		if(arr[i] != i+1)
		{
			int tmp = arr[i];
            arr[i] = arr[tmp-1];
            arr[tmp-1] = tmp;
			swaps++;
			i--;
		}
	}
	cout<<swaps<<endl;
}
int main()
{
	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	minimumSwaps(arr);
	return 0;
}