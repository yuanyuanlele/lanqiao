#include<bits/stdc++.h>
using namespace std;
int panduan(int n)
{
	while(n)
	{
	int t=n%10;
	n=n/10;
	if(t==1||t==2||t==0||t==9)
	return 1;
	}
	return 0;
}
int main()
{
	int sum;
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		if(panduan(i))
		sum+=i;
	}
	cout<<sum<<endl;
}
