#include <iostream>
#include <vector>
#include <map>
#include<set>
using namespace std;
void whatFlavours(vector<int> arr, int money)
{
	int one, two, flav1, flav2;
	int n = arr.size();
	map<int, int> freq;
	for (auto it : arr)
	{
		freq[it]++;
	}
	for (int i = 0; i < n; i++)
	{
		one = arr[i];
		two = money - arr[i];
		if (one != two)
		{
			if (freq.count(one) && freq.count(two))
			{
				flav1 = one;
				flav2 = two;
				break;
			}
		}
		else
		{
			if (freq[one] > 1)
			{
				flav1 = one;
				flav2 = one;
				break;
			}
		}
	}
	set<int> s;
	for (int j = 0; j < n; j++)
	{
		if(arr[j] == flav1 || arr[j] == flav2)
		{
			s.insert(j);
		}
	}
	for(auto it:s)
	{
		cout<<it+1<<" ";
	}
	cout<<endl;
}
int main()
{
	int t;
	cin >> t;
	while (t)
	{
		int n, m;
		cin >> m >> n;
		vector<int> arr(n + 1);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		whatFlavours(arr, m);
		t--;
	}
}