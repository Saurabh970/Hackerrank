#include<iostream>
#include<vector>
using namespace std;
void leftRotation(int n,int d,vector<long int> arr)
{
	//while(d>0)
//	{
//		long int temp = arr[0];
//		int i;
//		for(i=0;i<n-1;i++)
//		{
//			arr[i] = arr[i+1];
//		}
//		arr[i] = temp;
//		d--;
//	}
//	for(auto it:arr)
//	{
//		cout<<it<<" ";
//	}
		long int mod = d % n;
		for(int i=0;i<n;i++)
		{
			cout<<arr[(mod + i) % n]<<" ";
		}

}
int main()
{
	long int n,d;
	cin>>n>>d;
	vector<long int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	leftRotation(n,d,arr);
	return 0;
}