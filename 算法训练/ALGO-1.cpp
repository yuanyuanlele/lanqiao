#include<bits/stdc++.h>
using namespace std;
int a[1005];
int n,m;
int ans[1005];
int s[1005];
bool cmp(int x,int y)
{
	return x>y;
}
int fi(int l,int r,int k)
{
	int t=l;
	for(int i=0;i<r-l+1;i++)
	{
		s[i]=a[t-1];
		t++;
	}
	sort(s,s+r-l+1,cmp);
	return s[k-1];
}
int main()
{
	cin>>n;
	int l,r,k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>l>>r>>k;
		ans[i]=fi(l,r,k);
	}
	for(int i=0;i<m;i++)
	{
		cout<<ans[i]<<endl;
	}
}
