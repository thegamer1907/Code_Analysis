#include <bits/stdc++.h>

#define F first
#define S second
#define pb push_back
#define ll long long


using namespace std;

vector<int> dp;



int main() {

    ios_base::sync_with_stdio(0);

    cout.tie(0);
    cin.tie(0);

   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);

    string s;

    cin>>s;

    dp.resize(s.size()+1,0);

    if(s[0]==s[1]) {

        dp[0]=1;
    } else {
        dp[0]=0;
    }



    for(int i=1; i<s.size(); i++) {
        if (s[i-1]==s[i]) {
            dp[i]=dp[i-1]+1;
        } else {
            dp[i]=dp[i-1];
        }

        //cout<<dp[i]<<' '<<i<<endl;
    }
    int n;

    cin>>n;


    for(int i=0; i<n; i++) {
        int l,r;

        cin>>l>>r;

        l--;
        r--;

        cout<<dp[r]-dp[l]<<endl;
    }




    return 0;
}
