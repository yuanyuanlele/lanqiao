#include<bits/stdc++.h>
using namespace std;
long long int a=1,b=1,c=1,n1=1,n=2021041820210418,ans=0;
int main()
{
 
    for(a=1;a<=sqrt(n);a++){
        if(n%a==0){
            n1=n/a;
            for(b=1;b<=sqrt(n1);b++){
                if(n1%b==0)
                {
                    c=n1/b;
                    if(c>=b&&b>=a){
                        if(a==b&&b==c){
                            ans++;
                        }
                        if(a!=b&&b==c){
                            ans+=3;
                        }
                        if(a==b&&b!=c){
                            ans+=3;
                        }
                        if(a!=b&&b!=c&&a!=c){
                            ans+=6;
                        }
     
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}
