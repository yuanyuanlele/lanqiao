#include<bits/stdc++.h>
using namespace std;
int team[20][6];
int index;
int a[20];
int max_sum;
void dfs(int index,int sum)
{
	if(index==6)
	{
		max_sum=max(max_sum,sum);
		return;
		}
	for(int i=0;i<20;i++)
	{
		if(!a[i])
		{
			a[i]=1;
			dfs(index+1,sum+team[i][index]);
			a[i]=0;
		}
		}	
}
int main(){
	freopen("team.txt", "r", stdin); //��team.txt�ļ� ,�����ض��� 
        //ע���team.txt�ŵ�ͬһ��Ŀ¼�£����߰�����ע�͵����ֶ����� 
	for(int i = 0; i < 20; i++)
		for(int j = 0; j < 6; j++)
			cin>>team[i][j];
dfs(1,0);
cout<<max_sum;
			return 0;

}

