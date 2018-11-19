#include<bits/stdc++.h>
#include<stdio.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pop pop_back()
#define sz size()
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
///////////////////////////////////////////
map<string,int>m;
map<char,int>f,s;
string a[100100];

int main(){speed
    string word;
    cin>>word;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i],m[a[i]]=1,f[a[i][0]]=1,s[a[i][1]]=1;
    if(m[word]==1){
        cout<<"yes";
        return 0;
    }
    if(s[word[0]]==1&&f[word[1]]==1){
        cout<<"yes";
        return 0;
    }
    cout<<"no";
}
