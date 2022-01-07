#include<bits/stdc++.h>
using namespace std;
int a[100000];
int b[100000];
int c[100000];
int main()
{
	int indexi=1;
	int indexj=1;
	int indexk=1;
	int sum=0;
	int N=0;
	cin>>N;
	for(int x=0;x<N;x++)
	cin>>a[x];
	for(int x=0;x<N;x++)
	cin>>b[x];
	for(int x=0;x<N;x++)
	cin>>c[x];
	sort(a,a+N);
	sort(b,b+N);
	sort(c,c+N);
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			if(a[i]<b[j])
			{
				for(int k=0;k<N;k++)
				{
					if(b[j]<c[k])
					{
						sum+=N-k;
						break;
							}		
				}
				
			}
		}
	}
	cout<<sum<<endl;
}
