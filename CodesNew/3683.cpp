/*input
3
7
1
6
5
*/

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long
#define N 15000007
#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n,m;
    cin>>n>>m;
    int a[200];
    int mx =0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx = max(mx, a[i]);
    }
    int rem =0;
    for(int i=0;i<n;i++){
        rem += mx - a[i];
    }
    int a2 = mx+m;
    int a1= 0;
    if(m<=rem){
        a1 =mx;
    }else{
        m-=rem;
        a1 = mx + (int)ceil((double)m/n);
    }
    cout<<a1<<" "<<a2<<endl;
}