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
    
    long long unsigned int maxPairs = ((n-k+1)*(n-k))/2;
	
	cout<<"minimum no of pairs : "<<minPairs<<endl;
	cout<<"maximum no of pairs : "<<maxPairs<<endl;
	
	return 0;
}