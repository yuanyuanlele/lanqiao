#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long time=0;
	cin>>time;
	while(time>=86400000)
	{
		time=time%86400000;
	}
	int h,m,s,ms;
	if(time==0)
	{
		h=0;m=0;s=0;
	}
	else
	{
		int num=time/1000/60/60;
		h=num;
		time-=num*60*60*1000;
		num=time/1000/60;
		m=num;
		time-=num*60*1000;
		num=time/1000;
		s=num;
	}
	if(h<10)
	cout<<0<<h<<':';
	if(h>=10)
	cout<<h<<':';
	if(m<10)
	cout<<0<<m<<':';
	if(m>=10)
	cout<<m<<':';
	if(s<10)
	cout<<0<<s<<endl;
	if(s>=10)
	cout<<s<<endl; 
}
