#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
	int N;
	int deep=1;
	long long max_sum=-100000000000;
	int sum=0;
	int max_deep=1;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>a[i];
		sum+=a[i];
		if(i==pow(2,deep)-1)
		{
			if(max_sum<sum)
			{
				max_sum=sum;
			    max_deep=deep;
			}
			sum=0;
			deep++;
		}
		else if(i==N-1)
		{
		if(max_sum<sum)
			{
				max_sum=sum;
			    max_deep=deep;
			}
			sum=0;
			deep++;	
		}
	}
	cout<<max_deep;
} 
