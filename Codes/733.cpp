#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define pb push_back

int ss(int x){

int s=0;
while(x){
    s+=x%10;
    x/=10;
}
return s;
}

int cnt[2001][2001],cntt[2001][2001];

int main() {

ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);



int t=1;
//cin>>t;

while(t--){
int i=1,n;
cin>>n;
for(;;i++){
    int s= ss(i);
    if(s==10)
        n--;
    if(n==0){
        cout<<i;
        return 0;
    }
}

}


}


