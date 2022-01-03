#include<bits/stdc++.h>
using namespace std;
string maze[30];
int vis[30][50];
int next_x[4]={1,0,0,-1};
int next_y[4]={0,-1,1,0};
queue<int> que;
int flag=0;
char ans[1000];
char urld[4]={'U','R','L','D'};
void bfs()
{
	que.push(0);
	que.push(0);
	vis[0][0]=1;
	while(!que.empty())
	{
		int current_x=que.front();
		que.pop();
		int current_y=que.front();
		que.pop();
		for(int i=0;i<4;i++)
		{
			int next_step_x=current_x+next_x[i];
			int next_step_y=current_y+next_y[i];
			if(next_step_x<30&&next_step_x>=0&&next_step_y<50&&next_step_y>=0)
			  if(maze[next_step_x][next_step_y]=='0')
			    if(vis[next_step_x][next_step_y]==0)
			    {
			    	que.push(next_step_x);
			    	que.push(next_step_y);
			    	vis[next_step_x][next_step_y]=vis[current_x][current_y]+1;
				}
		}
	}
}
void dfs(int index,int x,int y)
{
	if(flag==1)
	return;
	if(index==1)
	{
		flag=1;
		for(int i=2;i<vis[29][49];i++)
		cout<<ans[i];
	}
	for(int i=3;i>=0;i--)
	{
		int pre_x=x+next_x[i];
		int pre_y=y+next_y[i];
		if(pre_x<30&&pre_x>=0&&pre_y<50&&pre_y>=0)
		  if(vis[pre_x][pre_y]==vis[x][y]-1)
		  {
		  	ans[index]=urld[i];
		  	dfs(vis[pre_x][pre_y],pre_x,pre_y);
		  	ans[index]=' ';
		  }
	}
	
}
int main()
{
	freopen("maze.txt","r",stdin);
	for(int i=0;i<30;i++)
	cin>>maze[i];
	bfs();
	dfs(vis[29][49],29,49);
	/*for(int i=0;i<30;i++)
	{
	for(int j=0;j<50;j++)
	printf("%4d",vis[i][j]);
	cout<<endl;*/
}
