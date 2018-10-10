#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
map<string ,int>my;
int main() {
    int n,m;
    int x;
    string s;
    cin>>n>>m;
    
    for (int i=0;i<n;i++)
    {cin>>s; my[s]++;}
    
    int k=0;
    for (int j=0;j<m;j++)
    {cin>>s; if (my[s]) k++;}
    
    if (k%2==1) n++;
    n-=k;
    m-=k;
    if (n>m) cout<<"YES";
    else cout<<"NO";
    }
