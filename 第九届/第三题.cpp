#include<bits/stdc++.h>
using namespace std;
int a[10][10]; 
int main()
{
	freopen("shuju.txt","r",stdin);
	for(int i=0;i<10;i++)
	for(int j=0;j<10;j++)
	cin>>a[i][j];
	int num5,num2;
	for(int i=0;i<10;i++)
	for(int j=0;j<10;j++)
	{
		while(a[i][j])
		{
			if(a[i][j]%5==0)
			{
				num5++;
				a[i][j]=a[i][j]/5;
			}
			else if(a[i][j]%2==0)
			{
				num2++;
				a[i][j]=a[i][j]/2;
			}
		}
	}
	cout<<min(num2,num5);
 } 
