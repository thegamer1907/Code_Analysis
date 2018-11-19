#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846
#define ll long long
#define pb(k) push_back(k)
#define mp(k,d) make_pair(k,d)
#define ts(k) to_string(k)
#define pii pair<int,int>
#define F first
#define S second
#define INF 1000000
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    char a,b;
    cin>>a>>b;
    
    cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            if(v[i][1]==a && v[j][0]==b){
                cout<<"YES";
                return 0;
            }else if(v[i][0]==a && v[i][1]==b){
                cout<<"YES";
                return 0;
            }else if(v[j][0]==a && v[j][1]==b){
                cout<<"YES";
                return 0;
            }else if(v[j][1]==a && v[i][0]==b){
                cout<<"YES";
                return 0;
            }
        }
    cout<<"NO"; 
}