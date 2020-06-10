#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> a)
{
	int n = a.size();
	int swaps = 0;
	for (int i = 0; i < n; i++) {    
    for (int j = 0; j < n - 1; j++) {
        if (a[j] > a[j + 1]) {
        	swaps++;
            swap(a[j], a[j + 1]);
        }
    }
    }
    cout<<"Array is sorted in "<<swaps<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    
}
int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	bubbleSort(a);
}