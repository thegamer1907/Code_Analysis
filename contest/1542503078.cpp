#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    double h,m,s,t1,t2,ans = 0;

    cin>>h>>m>>s>>t1>>t2;
    m= m/5;
    s=s/5;
    if(h==12) h=0;
    if(t1==12) t1 = 0;
    if(t2==12) t2=0;

    if(t1>t2)
        swap(t1,t2);

    if(h>=t1 && h<t2){
            ans++;
        if(m>=t1 && m<t2){
            ans++;
        }

        if(s>=t1 && s<=t2)
            ans++;

        if(ans==3)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else{
        ans++;

        if(m>=t1 && m<t2){
            ans=ans;
        }
        else
            ans++;

        if(s>=t1 && s<=t2)
            ans=ans;
        else
            ans++;

        if(ans==3)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }


}
