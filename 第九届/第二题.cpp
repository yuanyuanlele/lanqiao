#include<bits/stdc++.h>
using namespace std;
int a[10][32];
int main()
{
	int count=0;
	freopen("shuju.txt","r",stdin);
	for(int i=0;i<10;i++)
	for(int j=0;j<32;j++)
	cin>>a[i][j];
	for(int i=0;i<10;i++)
	{
		cout<<endl;cout<<endl;
	for(int j=0;j<32;j++)
	{
	cout<<bitset<8>(a[i][j]);
	count++;
	if(count==2)
	{
		cout<<endl;
		count=0;
	}
	}
	long long x=pow(9,9);
	cout<<x;
}
}
