#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define f first
#define s second
#define pii pair<int,int>
#define vii vector<pair<int,int> >n
#define si stack<int>
#define ll long long int

int n,k,f = 0,x;
map<string,int> mm;

int fun(string st,int ind){
    if(ind==k){
        if(mm.find(st)!=mm.end()) return 1;
        return 0;
    }
    if(st[ind]=='0'){
        if(fun(st,ind+1)) return 1;
        st[ind]='1';
        if(fun(st,ind+1)) return 1;
        st[ind]='0';
    }
    else {
        st[ind] = '0';
        if(fun(st,ind+1)) return 1;
        st[ind] = '1';
    }
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);

    
    cin>>n>>k;
    for(int i=0;i<n;i++){
        string temp = "";
        for(int j=0;j<k;j++){
            cin>>x;
            temp = temp + char(x+'0');
        }
        mm[temp] = 1;
        if(f==0 && fun(temp,0)){
            f = 1;
        }
    }
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}