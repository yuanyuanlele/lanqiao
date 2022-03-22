#include<bits/stdc++.h>
using namespace std;
int N;
int sum;
int a[12];
int b[12];
bool flag,s[12];
void dfs(int u)
{
	if(flag)
	return;
	if(u==N)
	{
		for(int i=0;i<N;i++)
		{
			a[i]=b[i];
		}
		for(int j=0;j<N-1;j++)
		for(int k=0;k<N;k++)
		a[k]+=a[k+1];
		if(a[0]==sum)
		{
			flag=true;
			for(int i=0;i<N;i++)
			cout<<b[i]<<" ";
			return;
		}
	}
	for(int i=1;i<=N;i++)
	{
		if(!s[i])
		{
			s[i]=true;
			b[u]=i;
			dfs(u+1);
			s[i]=false;
		}
	}
}
int main()
{
	cin>>N>>sum;
	dfs(0);
	return 0;
}
