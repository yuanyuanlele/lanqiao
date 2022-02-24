#include<bits/stdc++.h>
using namespace std;
int a[10]; 
void digui(int sum,int x)
{
	if(sum==100&&x==11)
	{
		for(int i=0;i<10;i++)
		cout<<a[i];
		cout<<endl;
		return;
	}
	if(x>11)
	return;
	a[x-1]=1;
	digui(sum*2,x+1);
	a[x-1]=0;
	digui(sum-x,x+1);
}
int main()
{
	digui(10,1);
}
