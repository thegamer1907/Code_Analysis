#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll h,m,s,t11,t22,n,k;
int coun[20];
int main() {
    bool f=0;
    f=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
            ll a=0;
        for(int j=0;j<k;j++){
            cin>>h;
            a=a*2+h;
        }
        coun[a]++;
    }
    for(int i=0;i<=15;i++){
        for(int j=0;j<=15;j++){
            if((i&j)==0&&coun[i]>0&&coun[j]>0){
                puts("YES");
                return 0;
            }
        }
    }
    puts("NO");
}
