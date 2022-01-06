#include<stdio.h> 

#define Max(a,b) (a>b?a:b)

#define Min(a,b) (a<b?a:b)

int dp[1002][5];

int main(){

	for(int i =1; i <=1000; i++){//³õÊ¼»¯±ß½ç

		dp[i][1] = i;

	}

	for(int cnt =2; cnt <=3; cnt++){

		for(int ind =1; ind <=1000; ind++){

			dp[ind][cnt] =dp[ind-1][cnt] +1;

			for(int k =2; k <= ind; k++){

				dp[ind][cnt] =Min(dp[ind][cnt],1+Max(dp[k-1][cnt-1],dp[ind-k][cnt]));

			}

		}

	}

	printf("%d\n",dp[1000][3]);

	return 0;
}
