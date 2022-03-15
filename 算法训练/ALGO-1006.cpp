#include<bits/stdc++.h>
using namespace std;
int a[1001][1001]={0};
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	cin>>a[i][j];
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	{
		if(a[i-1][j]>a[i][j-1])
		a[i][j]+=a[i-1][j];
		else
		a[i][j]+=a[i][j-1];
	}
	cout<<a[n][n];
}
