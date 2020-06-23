#include <iostream>
#include <vector>
using namespace std;
long long inversion = 0;
void merge(vector<int> &arr, int i, int j)
{
	int left_i = ((i + j) / 2) + 1;
	int right_i = j + 1;
	vector<int> temp(j - i + 1);
	int k = 0;
	int initial_i = i;
	j = left_i;
	while ((i < left_i) && (j < right_i))
	{
		if (arr[i] <= arr[j])
		{
			temp[k] = arr[i];
			i++;
		}
		else
		{
			temp[k] = arr[j];
			inversion += (left_i - i);
			j++;
		}
		k++;
	}
	for (; i < left_i; i++,k++)
	{
		temp[k] = arr[i];
	}
	for (; j < right_i; j++,k++)
	{
		temp[k] = arr[j];
	}
	for (k = 0; initial_i < right_i; initial_i++, k++)
	{
		arr[initial_i] = temp[k];
	}
}
void m_sort(vector<int> &arr, int i, int j)
{
	if (i < j)
	{
		m_sort(arr, i, (i + j) / 2);
		m_sort(arr, ((i + j) / 2) + 1, j);
		merge(arr, i, j);
	}
}
int main()
{
	int d;
	cin >> d;
	for (int j = 1; j <= d; j++)
	{
		inversion = 0;
		int n;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		m_sort(arr, 0, n - 1);
		cout << inversion << endl;
	}
}