#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0); 
      
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int c = 0;
    for(int i=0; i<n; i++){
        vector<int> vc = v;
        for(int j=i; j<n; j++){
            vc[j] = 1-vc[j];
            c = max(c, (int)count(vc.begin(), vc.end(), 1));
        }
    }
    cout<<c<<endl;
    
    return 0;
}

