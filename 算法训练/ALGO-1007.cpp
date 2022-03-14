#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	double a[21][21];
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
	{
		if(i<j)
		a[i][j]=0;
		else if(j==1)
		a[i][j]=pow(1.0/n,i-1);
		else
		a[i][j]=a[i-1][j-1]*(n-j+1)/n+a[i-1][j]*j/n;
	}
	cout<<fixed<<setprecision(4)<<a[m][n]<<endl;
}
