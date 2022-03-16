#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num=2021;
	for(int x=1;x>0;x++)
	{
		int m=x;
		while(m)
		{
			int t=m%10;
			m=m/10;
			if(t==1)
			num--;
		}
		if(num<0)
		{
			cout<<x-1<<endl;
			return 0;
		}
	}
return 0;
}

