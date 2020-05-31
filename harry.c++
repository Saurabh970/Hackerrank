#include <iostream>
using namespace std;
int n,arr[105],dp[105][105];

int sum(int s,int k)
{
	int ans=0;
	for(int i=s;i<=k;i++)
   {	ans+=arr[i];
   ans%=100;
   }
   return ans;
}

int solveMixture(int i,int j)
{
	if(i>=j)
	return 0;
	// cheking if we already calculate the solution for dp[i][j] then we return it
	if(dp[i][j]!=-1)
	return dp[i][j];

	dp[i][j]=INT_MAX;
	for(int k=i;k<=j;k++)
	{
		dp[i][j]=min(dp[i][j],solveMixture(i,k)+solveMixture(k+1,j)+sum(i,k)*sum(k+1,j));
	}
	return dp[i][j];
}

int main(void) {
	long long n;
	cin>>n;
    for(int i=0;i<n;i++)
	cin>>arr[i];
	
// initializing dp matrix with -1
	for(int i=0;i<105;i++)
	for(int j=0;j<105;j++)
	dp[i][j]=-1;

    cout<<"Minimum smoke: "<<solveMixture(0,n-1)<<"\n";
    return 0;

}