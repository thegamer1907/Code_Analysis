#include <bits/stdc++.h>
using namespace std;

int n,t,m;

int main(){
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++)
        for (int j=i;j<n;j++){
            t=0;
            for (int z=0;z<n;z++){
                if (i<=z && z<=j)
                    t+=(!a[z]);
                else
                    t+=a[z];
            }
            if (t>m)
                m=t;
        }
    cout<<m;
}
