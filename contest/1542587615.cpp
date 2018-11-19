#include<bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <climits>
#include <map>
#include <cmath>
#include <algorithm>
#include <set>
#include <stack>
#include <deque>
#include <vector>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <utility>
#include <queue>
#define ll long long
#define sl(n) scanf("%lld", &n)
#define sf(n) scanf("%lf", &n)
#define si(n) scanf("%d", &n)
#define ss(n) scanf("%s", n)
#define pii pair <int, int>
#define pll pair <ll, ll>
#define plp pair <int, pll >
#define pb push_back

using namespace std;


int main(){
    string tmi;
    string ami[10000];
ll int z,n,y,m;
while(cin>>tmi)
{cin>>n;

for(int i=0;i<n;i++){cin>>ami[i];

}
z=0;
    for(int i=0;i<n;i++){

 for(int t=0;t<n;t++){

string p=ami[i]+ami[t];
//cout<<"str"<<p<<endl;
y=0;
while(y<p.size()-1){

if(p[y]==tmi[0]&&p[y+1]==tmi[1]){


z++;break;
}
    y++;
}

    }
    if(z){break;}
}
if(z){

    cout<<"YES\n";
}
else{


    cout<<"NO\n";
}

}
}
