#include <bits/stdc++.h>
using namespace std;
const int N=30030;
int n,m;
long long a[N];
int main(){


     cin >> n >> m;
     for(int i=1;i<=n-1;i++) cin >> a[i];
     for(int i=1;i<=n;i+=0){
        if(i==m) return cout << "YES",0;
        if(i>m) return cout << "NO",0;
            i+=a[i];
     }
     cout << "NO";

}
