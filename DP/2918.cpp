#include<vector>
#include<string>
#include<algorithm>
#include<utility>
#include<iostream>
#include<list>
#include<stack>
#include<set>
#include<queue>
#include<cstdio>
#include<map>
#include<climits>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int main()
{
    //ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    int a[n];
    int b[k];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<k;i++){
        cin>>b[i];
    }
    if(k>1) cout<<"Yes";
    else{
        if(a[0]==0) a[0]=b[0];
        int prev=a[0];
        bool yes=false;
        for(int i=1;i<n;i++){
            if(a[i]==0) a[i]=b[0];
            if(a[i]<prev) yes=true;
            prev=a[i];
        }   
        if(yes) cout<<"Yes";
        else cout<<"No";
    }
    return 0;
}