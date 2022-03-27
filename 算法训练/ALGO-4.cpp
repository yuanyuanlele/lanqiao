#include<bits/stdc++.h>
using namespace std;
vector<int> u[100005];
int sum=0;
int n;
int dp[100005][2];
void dfs(int node,int pre)
{
	for(int i=0;i<u[node].size();i++)
	{
		int temp=u[node][i];
		if(temp!=pre)
		{
			dfs(temp,node);
			dp[node][1]=dp[node][1]+dp[temp][0];
			dp[node][0]=dp[node][0]+max(dp[temp][0],dp[temp][1]);
		}
	}
 } 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>dp[i][1];
	int k,l;
	for(int i=1;i<=n-1;i++)
	{
		cin>>k>>l;
		u[k].push_back(l);
		u[l].push_back(k);
	}
	dfs(1,0);
	cout<<max(dp[1][1],dp[1][0]);
}
