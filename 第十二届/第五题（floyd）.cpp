#include<bits/stdc++.h>
using namespace std;
vector<int> u[2025];
vector<int> v[2025];
int floyd[2025][2025];
void initmap()
{
	for(int i=1;i<=2021;i++)
	for(int j=i+1;j<=2021;j++)
	{
		if(j-i<=21)
		{
		u[i].push_back(j);
		v[i].push_back(i*j/__gcd(i,j));
		u[j].push_back(i);
		v[j].push_back(i*j/__gcd(i,j));
	}
	}
}
void afloyd()
{
	memset(floyd,0x3f,sizeof(floyd));
	for(int i=1;i<=2021;i++)
	for(int j=0;j<v[i].size();j++)
	{
		floyd[i][u[i][j]]=v[i][j];
		floyd[u[i][j]][i]=v[i][j];
	}
	for(int k=1;k<=2021;k++)
	for(int i=1;i<=2021;i++)
	for(int j=1;j<=2021;j++)
	{
		floyd[i][j]=floyd[j][i]=min(floyd[i][j],floyd[i][k]+floyd[k][j]);
	}
	cout<<floyd[1][2021]<<endl;
}
int main()
{
	initmap();
	afloyd();
	return 0;
}






