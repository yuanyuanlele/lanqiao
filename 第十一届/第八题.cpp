#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		char a=s[i];
		char b=s[i+1];
		cout<<a;
		if(b-'0'<10)
		{
			for(int j=1;j<b-'0';j++)
			cout<<a;
			i++;
		}
	}
}
