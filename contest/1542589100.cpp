#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string si;
    cin>>si;
    int n;
    cin>>n;
    int flag1=0,flag2=0;
    vector<string> vecs(n);
    for(int i=0;i<n;i++){
        cin>>vecs[i];
        if(vecs[i]==si)
            flag1=1;
    }
    if(flag1==1)
        cout<<"YES";
    else{
        for(int i=0;i<n;i++){
            if(vecs[i][0]==si[1])
                flag1=1;
            if(vecs[i][1]==si[0])
                flag2=1;
        }
        if(flag1==1 && flag2==1)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}
