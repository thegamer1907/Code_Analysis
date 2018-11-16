
 #include<bits/stdc++.h>
using namespace std;
int main() {
    long long n,i,t,c=1,x;
    cin>>n>>t;
    for(i=1;i<n;i++) {
        cin>>x;
        if(c==i) c=i+x;
        if(t==c) {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
