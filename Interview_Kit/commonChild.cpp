#include <iostream>
#include <string>
using namespace std;
int dp[5005][5005];
int commonChild(string s1, string s2)
{
	int n = s1.length();
	int m = s2.length();
	for (int i = 0; i <= n; i++)
		dp[i][0] = 0;
	for (int i = 0; i <= m; i++)
		dp[0][i] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (s1[i - 1] == s2[j - 1])
			{
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else
			{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	return dp[n][m];
}
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int result = commonChild(s1, s2);
	cout << result << endl;
	return 0;
}