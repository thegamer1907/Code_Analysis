// KMP
#include <iostream>
#include<algorithm>
#include<iomanip>
#include<string.h>
#include<unordered_map>
#include<map>
#include<cmath>
#include<vector>
#include<iomanip>
#include<queue>
using namespace std;
#define inf 100000000007
#define x first
#define y second
#define ll long long
#define ii pair<ll, ll>
#define vi vector<ll>
#define pb push_back
#include<set>
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll n, k, m=0, z=0;
ll A[1000005];

int main()
{
    ll i, j, a, b, c, l, r, ql, qr;
    string s;
    cin>>s;
    n= s.length();
    j=0;i=1;
    while(i<n){
        if(s[i]==s[j])
            A[i]= j+1, j++;
        else if(j==0)
            A[i]=0;
        else{
            j= A[j-1];
            continue;
        }
        i++;
    }
    if(A[n-1] == 0){
        cout<<"Just a legend";
        return 0;
    }
    for(i=0; i<n-1; i++)
        if(A[i]==A[n-1]){
            cout<<s.substr(0, A[n-1]);
            return 0;
        }
    if(A[A[n-1]-1] == 0){
        cout<<"Just a legend";
        return 0;
    }
    cout<<s.substr(0, A[A[n-1]-1]);
}
