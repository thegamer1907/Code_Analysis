#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    int p=*max_element(a.begin(),a.end());
    int ans2=m+p;
    int ans1=0;
    for(int i=0;i<n;i++){
        m-=p-a[i];
        a[i]=p;
        if(m<=0){
            ans1=p;
            break;
        }
    }
    if(ans1==0){
        int x=m/n+(m%n>0);
        ans1=p+x;
    }
    cout << ans1 << " " << ans2;


    return 0;
}