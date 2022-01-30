//可以投机取巧设100个人，这样均匀分布有一个感染
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ans;
	int min=100000;
	for(int k=1;k<=100;k++)
	{
		if(100%k==0)
		if(100/k+k<min)
		{
			min=100/k+k;
			ans=k;
		}
		if(100/k!=0)
		if(100/k+1+k<min)
		{
			min=100/k+1+k;
			ans=k;
		}
	}
	cout<<ans<<endl;
 } 
