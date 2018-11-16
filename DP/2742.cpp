#include<bits/stdc++.h>
#define ll long long
using namespace std;
main(){
    int n;
    cin >> n;
    int a[5] ={1
 ,
5
,
10
,
20
,
100
};
int ans = 0;
for(int i = 4; i >= 0; i--){
    ans += n / a[i];
    n = n % a[i];
}
cout<<ans<<endl;
}
