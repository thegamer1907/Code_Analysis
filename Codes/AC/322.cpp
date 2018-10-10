#include<bits/stdc++.h>
using namespace std;
int a[100050];
int main(){

int n;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>a[i];
    a[i]+=a[i-1];
}
int q;
cin>>q;
while(q--){
        int x;
        cin>>x;
    int t=lower_bound(a+1,a+n+1,x)-a;
    cout<<t<<endl;

}




return 0;}
