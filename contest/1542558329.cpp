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
int n,k;
vector<string>bits;
map<string,bool>m;
int main(){speed
    cin>>n>>k;
    for(int i=0;i<(2<<k);i++){
        int x=i;
        string s="";
        while(x!=0){
            s+=x%2+'0';
            x/=2;
        }
        while(s.sz<k) s+='0';
        reverse(s.begin(),s.end());
        if(s.sz==k) bits.pb(s);
    }
    //for(int i=0;i<bits.sz;i++) cout<<bits[i]<<endl;

    for(int i=1;i<=n;i++){
        string s="";
        for(int j=0;j<k;j++){
            int x;
            cin>>x;
            s+=(x+'0');
        }
        m[s]=1;
    }
    for(int i=0;i<bits.sz;i++){
        for(int j=0;j<bits.sz;j++){
            if(m[bits[i]]==1&&m[bits[j]]==1){
                int cnt=0;
                for(int r=0;r<bits[i].sz;r++){
                    int x=bits[i][r]-'0';
                    int y=bits[j][r]-'0';
                    if(x==1&&y==1) cnt++;
                }
                if(cnt==0){
                    cout<<"yes";
                    return 0;
                }
            }
        }
    }
    cout<<"no";
}
