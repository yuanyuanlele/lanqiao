#include<bits/stdc++.h>
using namespace std;
int panduan(int n)
{
	while(n){
	int t=n%10;
	n=n/10;
	if(t==2||t==4)
	return 0;
}
return 1;
}
int main()
{
	int count;
	for(int i=1;i<2019;i++)
	if(panduan(i))
	for(int j=i+1;j<2019;j++)
	if(panduan(j))
	{
	    int k=2019-i-j;
	    if(k>j&&panduan(k)){
		count++;
	}
	}
	cout<<count<<endl;
}
