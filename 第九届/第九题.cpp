#include<bits/stdc++.h>
using namespace std;
int flag,N;
char mp[1000][1000];
int vis[1000][1000];
int next_x[4]={1,0,0,-1};
int next_y[4]={0,1,-1,0};
void dfs(int x,int y)
{
	vis[x][y]=1;
	if(x+1>=0 && x+1<N && x-1>=0 && x-1<N && y+1>=0 && y+1<N && y-1>=0 && y-1<N)
	if(mp[x+1][y]=='#'&&mp[x-1][y]=='#'&&mp[x][y+1]=='#'&&mp[x][y-1]=='#')
	flag=1;
	for(int i=0;i<4;i++)
	{
		int next_stepx=x+next_x[i];
		int next_stepy=y+next_y[i];
		if(vis[next_stepx][next_stepy]==0&&mp[next_stepx][next_stepy]=='#'&&next_stepx>=0&&next_stepx<N&&next_stepy>=0&&next_stepy<N)
		dfs(next_stepx,next_stepy);
	}
}
int main()
{
	int ans=0,num=0;
	cin>>N;
	for(int i=0;i<N;i++)
	for(int j=0;j<N;j++)
	cin>>mp[i][j];
	for(int i=0;i<N;i++)
	for(int j=0;j<N;j++)
	if(mp[i][j]=='#' && !vis[i][j])
	{
		num++;
		flag=0;
		dfs(i,j);
		if(flag)
		ans++;
	}
	cout<<num-ans<<endl;
	return 0;
}
