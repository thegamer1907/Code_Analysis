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

int n;
string org,tryme[107];

int main()
{
    cin>>org>>n;
    for(int i=0;i<n;i++)cin>>tryme[i];
    for(int i=0;i<n;i++){
        if(tryme[i]==org){cout<<"YES";return 0;}
        else if(tryme[i][1]==org[0]){
            for(int j=0;j<n;j++){
                if(tryme[j][0]==org[1]){cout<<"YES";return 0;}
            }
        }
    }
    cout<<"NO";
    return 0;
}
