#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=10000;
	int time=0;
	while(n)
	{
		if(n<=600)
		{
			time=time*60+n*60/600;
		break;}
		n-=600;
		n+=300;
		time=time+2;
	}
	cout<<time<<endl;
}
