#include<bits/stdc++.h>
using namespace std;
string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char a[5];
int index;
int n=2019;
int main()
{
while(n)
{
	int t=n%26;
	n=n/26;
	a[index]=s[t-1];	
    index++;
 }
 for(int i=index-1;i>=0;i--)
 cout<<a[i];
}
