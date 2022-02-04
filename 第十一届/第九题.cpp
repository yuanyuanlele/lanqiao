#include<bits/stdc++.h>
using namespace std;
int n,m;
int sum;
void dfs(int x,int y)
{
	if(x%2==0&&y%2==0)
	return;
	if(x==n&&y==m)
	{
		sum++;
		return;
	}
	if(x<=n&&y<=m)
	{
		dfs(x,y+1);
		dfs(x+1,y);
	}
}
int main()
{
	cin>>n>>m;
	dfs(1,1);
	cout<<sum;
}
