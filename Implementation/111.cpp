#include <bits/stdc++.h>
using namespace std;
bool in_range(int l, int r, int x){
    return x>=l && x<r;
}
int main() {
    int n, a, b;
    cin>>n>>a>>b;
    a--, b--;
    if(a>b)
        swap(a, b);
    for(int step=1, round = 1; step<n/2; step*=2, round++){
        for(int i=0; i<n; i+=step*2){
            if(in_range(i, i+step, a) && in_range(i+step, i+2*step, b)){
                cout<<round;
                return 0;
            }
        }
    }
    cout<<"Final!";
    return 0;
}