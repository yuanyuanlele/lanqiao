#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	if(n%2!=0)
	cout<<n*(n-1)*(n-2);
	else if(n%3==0)
	cout<<(n-1)*(n-3)*(n-2);
	else
	cout<<n*(n-1)*(n-3);
}
