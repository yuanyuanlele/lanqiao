#include<bits/stdc++.h>
using namespace std;

int main()
{
		for (int a = 1; a <= 9; a++) {
			for (int b = 0; b <= 9; b++) {
				for (int c = 0; c <= 9; c++) {
					for (int d = 0; d <= 9; d++) {
						for (int e = 0; e <= 9; e++) {
							for (int n = 1; n <= 9; n++) {
 
								if (a != b && a != c && a != d && a != e && b != c && b != d && b != e && c != d
										&& c != e && d != e) {
									int i = e + d * 10 + c * 100 + b * 1000 + a * 10000;
									int j = a + b * 10 + c * 100 + d * 1000 + e * 10000;
									if (i * n == j) {
										cout<<i;
									}
								}
 
							}
						}
					}
				}
			}
		}
 
	}


