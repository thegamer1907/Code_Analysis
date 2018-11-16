/*
 Time & Date of creation 14:18:10 30/10/2018  
 Author : Amit Kumar
 Copyright © amit2rockon. All rights reserved. 
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

#define fi  first
#define se  second
#define mp  make_pair
#define pb  push_back
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define endl "\n"
#define fast_IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fast_IO;
    int n,m;
    cin>>n>>m;
    vi aa(n+1);
    vi ll(m+1);

    for(int i=1;i<=n;i++)
        cin>>aa[i];

    for(int i=1;i<=m;i++)
        cin>>ll[i];

    set<int> no;

    vi bb(n+1);

    for(int i=n;i>0;i--)
    {
        no.insert(aa[i]);
        int tmp;
        tmp = no.size();
        bb[i]=tmp;
    }


    for(int i=1;i<=m;i++)
    {
        cout<<bb[ll[i]]<<endl;
    }










}