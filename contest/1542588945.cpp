#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair

typedef long long int ll;
typedef vector< pair<int,int> > vii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<long long int> vll;
typedef pair<int,int> pii;

const ll INF= ll (1e18);
const int MOD= 1e9+7;

int main()
{
  ios_base::sync_with_stdio(0);
cin.tie(0);
    string s;
    cin>>s;
    int n;
    cin>>n;
    string s1[n];
    for(int i=0;i<n;i++)
        cin>>s1[i];

        bool flag=false,flag2=false;
        for(int i=0;i<n;i++)
        {
            if(s1[i]==s)
            {
                flag=true;
            }
        }
        if(flag)
            cout<<"YES";
        else{
            for(int i=0;i<n;i++)
                if(s1[i][1]==s[0])
                    flag=true;
            for(int i=0;i<n;i++)
                if(s1[i][0]==s[1])
                    flag2=true;
            if(flag & flag2)
                cout<<"YES";
            else
                cout<<"NO";
        }
    return 0;

}
