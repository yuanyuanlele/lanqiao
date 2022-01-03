#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
	int N,M;
	cin>>N>>M;
	int c=N+M+1;
	for(int i=0;i<c;i++)
	  cin>>a[i];
	sort(a,a+c);
	int sum=0;
	for(int i=0;i<=N;i++)
	sum+=a[c-i-1];
	for(int i=0;i<M;i++)
	sum-=a[i];
	cout<<sum;
}
