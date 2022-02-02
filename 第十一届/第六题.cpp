#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
	int n=0;
	int count=0;
	cin>>n;
	while(n!=0)
	{
		a[count]=n;
		n=n/2;
		count++;
		}
	int num=0;	
	while(a[num]>0)
	{
		cout<<a[num]<<" ";
		num++;
	}
}
