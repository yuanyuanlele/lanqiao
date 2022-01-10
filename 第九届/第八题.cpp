#include<bits/stdc++.h>
using namespace std;
pair<int,int> ids[100000];
int N,D,K;
int judge(int a,int b)
{
	int sum=0;
	int l=a,r=a;
	while(l<=r&&r<=b)
	{
		sum++;
		if(sum>=K)
		{
			if(ids[r].second-ids[l].second<D) return 1;
			else
			{
				l++;
				sum--;
			}
		}
		r++;
	}
	return 0;
}
int main()
{
	cin>>N>>D>>K;
	int ts,id;
	for(int i=0;i<N;i++)
	{
		cin>>ts>>id;
		ids[i].first=id;
		ids[i].second=ts;
	}
	sort(ids,ids+N);
	int i=0;
 	while(i<N)
 	{
 		id=ids[i].first;
 		int begin=i,end;
 		while(id==ids[i].first&&i<N)
 		{
 			end=i;
 			i++;
		 }
		if(judge(begin,end))
		{
			cout<<id<<endl;
		}
	 }
 	
 	
 	
 	
 	
}
