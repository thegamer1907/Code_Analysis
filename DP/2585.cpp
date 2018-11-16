#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
const int N=1e5+10;

int a[N];

int main(){
    //freopen("a.txt", "r", stdin);
    //freopen("answers.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int res=1,ans=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1])
            res++;
        else{
            ans=max(res,ans);
            res=1;
        }
    }
    cout<<max(res,ans)<<endl;
    return 0;
}