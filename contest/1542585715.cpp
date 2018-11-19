    #include <bits/stdc++.h>
    #include <queue>
    #define ll long long
    #define mp make_pair
    const float pi=3.141592654;
    using namespace std;
    ll h,m,s,t1,t2;
    map<ll,ll> ma;
    ll gcd(ll a,ll b){return b==0?a:gcd(b,a%b);}
    int main(){
        cin>>h>>m>>s>>t1>>t2;
        ma[h+1]=ma[h+12+1]=ma[s/5+1]=ma[s/5+13]=ma[m/5+1]=ma[m/5+13]=1;
        bool flag = true;
        if(t1<t2) swap(t1,t2);
        for(int i=t2+1; i<=t1; i++)
            if(ma[i]==1){
                flag = false;
                break;
            }
        if(flag){
            cout<<"YES"<<endl;
            return 0;
        }
        flag = true;
        for(int i=t1+1; i<=t2+12; i++)
            if(ma[i]==1){
                flag = false;
                break;
            }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

