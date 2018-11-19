#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
#define ff first
#define ss second

using namespace std;

const int N=1e6+7;

int h,m,s,t1,t2;
bool block,clw=1;

int main()
{
    cin>>h>>m>>s>>t1>>t2;
    for(int i=t1;i!=t2;i=i<12?i+1:i%12+1){
        if(h==i){
            clw=0;
        }
    }
    if(t2==h&&m==0&&s==0)clw=0;
    if(clw){
        for(int i=(t1*5)%60;i!=(t2*5)%60;i=(i+1)%60){
            if(m==i||s==i)
            {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }
    else{
        for(int i=(t2*5)%60;i!=(t1*5)%60;i=(i+1)%60){
            if(m==i||s==i)
            {
                cout<<"NO";
                return 0;
            }
        }
        cout<<"YES";
    }
    return 0;
}
