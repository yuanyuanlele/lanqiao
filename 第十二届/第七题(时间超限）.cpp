#include<bits/stdc++.h>
using namespace std;
int N=0;
int ans=0;
int fama[105];
int flag=0;
void fi(int x,int y,int z)
{
	if(flag==1)
	return;
	if(x==y)
	{
		flag=1;
		ans++;
		return ;
	}
	if(z<=N)
	{
	fi(x,y,z+1);
	fi(x+fama[z],y,z+1);
	fi(x-fama[z],y,z+1);
	}
}
int main()
{
	memset(fama,0,sizeof(fama));
	cin>>N;
	for(int i=0;i<N;i++)
	cin>>fama[i];
	sort(fama,fama+N);
	for(int i=1;i<=100000;i++)
	{
		flag=0;
		fi(0,i,0);
	}
	cout<<ans<<endl;
	return 0; 
}
