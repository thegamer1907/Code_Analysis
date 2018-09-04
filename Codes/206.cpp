#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int N=1e5+10;

int a[N],s[N];

int main(){
    //freopen("a.txt", "r", stdin);
    //freopen("answers.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    s[0]=a[0];
    for(int i=1;i<n;i++){
        s[i]=a[i];
        s[i]+=s[i-1];
    }
    int m;
    cin>>m;
    while(m--){
        int x;
        cin>>x;
        cout<<lower_bound(s,s+n,x)-s+1<<endl;
    }

    return 0;
}