#include<bits/stdc++.h>
using namespace std;
int zhuanhuan(int num)
{
	if(num<10)
	return num;
	int sum=0;
	while(num)
	{
		sum+=num%10;
		num/=10;
	}
	return zhuanhuan(sum);
 } 
int main()
{
	string str;
	int ans[6];
	vector <int> a;
	int num;
	cin>>num;
	for(int i=0;i<num;i++)
	{
		for(int c=0;c<6;c++)
		{
			ans[c]=0;
		}
		cin>>str;
		for(int j=0;j<str.size();j++)
		{
			ans[j%6]+=(str[j]-'a'+97);
		}
		for(int k=0;k<6;k++)
		{
			ans[k]=zhuanhuan(ans[k]);
		}
		int b=ans[0]*100000+ans[1]*10000+ans[2]*1000+ans[3]*100+ans[4]*10+ans[5];
		a.push_back(b);
	}
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<endl;
	}
 } 
