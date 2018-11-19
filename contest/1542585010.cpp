    #include <bits/stdc++.h>
    #include <queue>
    #define ll long long
    #define mp make_pair
    const float pi=3.141592654;
    using namespace std;
    ll n,a,b;
    string s,s1;
    ll gcd(ll a,ll b){return b==0?a:gcd(b,a%b);}
    int main(){
        cin>>s>>n;
        for(int i=0; i<n; i++){
            cin>>s1;
            if(s1[1]==s[0])
                a = 1;
            if(s1[0]==s[1])
                b = 1;
            if(s1==s)
                a=1, b=1;
        }
        if(a==b && a==1){
            cout<<"YES"<<endl;
        }else
            cout<<"NO"<<endl;
    }

