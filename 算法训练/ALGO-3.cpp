#include<bits/stdc++.h>
using namespace std;
#define mo 1000000007
int dp[1005][105];
int ans;
int main()
{
	int K,L;
	cin>>K>>L;
	for(int i=0;i<L;i++)
	for(int j=0;j<K;j++)
	dp[i][j]=0;
	if(K==1&&L==1)
	{
		cout<<0;
		return 0;
	}
	else if(L==1)
	{
		cout<<K;
		return 0;
	}
	else if(K>1)
	{
		for(int j=0;j<K;j++)
		dp[0][j]=1;
		for(int i=1;i<L;i++)
		for(int j=0;j<K;j++)
		for(int k=0;k<K;k++)
		{
			if(abs(j-k)!=1)
			{
				dp[i][j]=dp[i][j]+dp[i-1][k];
				dp[i][j]=dp[i][j]%mo;
			}
		}
		for(int j=1;j<K;j++)
		{
			ans+=dp[L-1][j];
			ans=ans%mo; 
		}
		cout<<ans<<endl;
	}
}
