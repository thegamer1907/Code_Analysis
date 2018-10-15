#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> v;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL);
    int n,x,c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    
    sort(v.begin(),v.end());
    
    /*for(int i=0;i<n;i++){
        cout<<v[i]<<" "; 
    }*/
    
    int r=n/2,l=0;
    while(l<n/2 && r<n){
        if(v[l]*2<=v[r]){
            l++;
            c++;
        }
        
        r++;
    }
    cout<<n-c;
    return 0;
}