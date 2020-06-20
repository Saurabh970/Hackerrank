#include <iostream>
#include <vector>
#include <map>
using namespace std;
long countTriplets(vector<long> arr, long r)
{
	map<long int, long int> left, right;
	long count = 0;
	for (auto it : arr)
	{
		right[it]++;
	}
	for (auto i : arr)
	{
		long c_l = 0, c_r = 0;
		right[i]--;
		long check = right[i];
		if (check == 0)
		{
			right.erase(i);
		}
		if (left.find(i / r) != left.end() && i % r == 0)
		{
			c_l = left[i / r];
		}
		if (right.find(i * r) != right.end())
		{
			c_r = right[i * r];
		}
		left[i]++;
		count += c_l * c_r;
		
	}
	return count;
}
int main()
{
	long n, r;
	cin >> n >> r;
	vector<long> arr(n);
	for (long i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	long result = countTriplets(arr, r);
	
	cout << result << endl;
}