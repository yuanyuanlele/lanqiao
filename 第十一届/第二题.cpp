//excel用日期A11921/7/23
//A22020/7/1
//A3=A2-A1求出天数
//A3*24*60 
#include<bits/stdc++.h>
using namespace std;
int yearDay(int year)
{
	if ((year%4==0&&year%100!=0) || (year%400==0))
	{
		return 366;
	}
	return 365;
} 
int main()
{
	int time = 0;
	for(int i = 1922; i <= 2020; i++)
	{
		time += yearDay(i);
	}
	time -= 22; 
	cout << time*24*60 << endl;
	return 0;
	
}

