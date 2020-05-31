#include<iostream>
using namespace std;
int main()
{
	
	long long unsigned int n,k;
	cout<<"no of workers : ";
	cin>>n;
	cout<<"no of groups : ";
	cin>>k;

    long long unsigned int minPairs = k * ((n / k ) * ((n - k) / k)) / 2 + ((n / k ) * (n % k)); 
	
	cout<<"minimum no of pairs : "<<minPairs<<endl;
	
	return 0;
}