#include<bits/stdc++.h>

using namespace std;

struct w{
    char f;
    char s;
};

int main(){
    int n;
    w a[100], b;
    cin>>b.f>>b.s>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].f>>a[i].s;
        if(a[i].f==b.f && a[i].s==b.s) return cout<<"YES", 0;
    }
    for(int i=0;i<n;i++){
        if(a[i].s==b.f) for(int j=0;j<n;j++){
            if(a[j].f==b.s) return cout<<"YES", 0;
        }
    }
    cout<<"NO";
}
