#include <bits/stdc++.h>
#define FAST cin.tie(NULL),cout.tie(NULL),ios::sync_with_stdio(0)
#define ll long long
#define pb push_back
using namespace std;

int main(){
ll k,n,w;
cin>>k>>n>>w;
ll str=k*w*(w+1)/2;
cout<<max(n-n,str-n);
}
