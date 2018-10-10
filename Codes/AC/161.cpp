#include <bits/stdc++.h>
using namespace std;

vector<int>vec;
int n,l;

bool ok(double d){
    for(int i=1 ; i<vec.size(); i++){
        int a = vec[i - 1];
        int b = vec[i];

        if(a + d < b - d)
            return false;
    }

    if(vec.front() - d > 0)
        return false;
    if(vec.back() + d < l)
        return false;

    return true;
}

int main() {

    int n; cin>>n;

    int st = 1;
    for(int i=0 ; i<n ; i++){
        int x; cin>>x;
        vec.push_back(st);
        st += x;
    }

    int q; cin>>q;
    for(int i=0 ; i<q; i++){
        int x; cin>>x;

        auto it = upper_bound(vec.begin(),vec.end(), x);
        int ans = it - vec.begin();

        cout<<ans<<"\n";
    }


}













