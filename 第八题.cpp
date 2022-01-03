#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
	int N;
	int count=1;
	cin>>N;
	for(int i=0;i<N;i++)
		cin>>a[i];
	sort(a,a+N-1);
	int min_num=a[1]-a[0];
	for(int i=1;i<N;i++)
	{
		min_num=__gcd(min_num,a[i+1]-a[i]);
	}
	while(a[0]!=a[N-1])
	{
		a[0]+=min_num;
		count++;
	}
	cout<<count;
}
