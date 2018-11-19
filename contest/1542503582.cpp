#include<bits/stdc++.h>
#define optimize  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int
#define pb push_back

using namespace std;

int main()
{
    optimize;

    string s;
    cin>>s;
    int n,ans = 0;;
    cin>>n;
    string t[n];

    for(int i = 0;i<n;i++){
        cin>>t[i];

        if(ans==0){
            if(t[i]==s)
                ans = 1;
        }
    }

    if(ans==1){
        cout<<"YES\n";
    }
    else{

        int p = 0;
        for(int i = 0;i<n;i++){
            if(s[0]==t[i][1]){
                p = 1;
                break;
            }
        }

        if(p==0)
            cout<<"NO\n";
        else{
            for(int i = 0;i<n;i++){
                if(s[1]==t[i][0]){
                    p = 0;
                    break;
                }
            }

            if(p==1)
                cout<<"NO\n";
            else
                cout<<"YES\n";
        }
    }

}
