/// In The Name Of Allah
#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define S second
#define F first
#define OO LLONG_MAX
using namespace std;
const int N=1000011;
int arr[N],n,m,k;
string s,t;
bool S1[1000],S2[1000];
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin>>s>>n;
    for(int i=0 ; i<n ; i++){
        cin>>t;
        S1[t[0]]=1;
        S2[t[1]]=1;
        if(t==s)    return cout<<"YES"<<endl,0;
        reverse(t.begin(),t.end());
        if(t==s)    return cout<<"YES"<<endl,0;
    }
    if((S2[s[0]]&&S1[s[1]]))    cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
}
