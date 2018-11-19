#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string s;
    int n,m=0;

    cin>>s>>n;

    string st[n];

    for(int i=0;i<n;i++){
       cin>>st[i];

       if(st[i]==s)
            m=1;
    }

    if(m==1)
        cout<<"YES\n";
    else{
        for(int i = 0;i<n;i++){
            if(st[i][0]==s[1]){
                m++;
                break;
            }
        }

        for(int i = 0;i<n;i++){
            if(st[i][1]==s[0]){
                m++;
                break;
            }
        }

        if(m==2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

}
