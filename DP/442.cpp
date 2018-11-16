#include<bits/stdc++.h>
#define ll long long
#define f first
#define s second
#define mp make_pair
#define bp push_back
const int mx=1e5+10;
using namespace std;
int a[105],b[105];
main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int ans=0;
    if(n>=m)
    for(int i=0;i<n;i++){
        //if(i>m)break;
        for(int j=0;j<m;j++){
            if(a[i]==b[j]||a[i]==b[j]-1||a[i]==b[j]+1){
                ans++;
                b[j]=-1;
                break;
            }
        }
    }
    else{
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(b[i]==a[j]||b[i]==a[j]-1||b[i]==a[j]+1){
                    ans++;
                    a[j]=-1;
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
}
