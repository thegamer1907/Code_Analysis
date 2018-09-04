#include<bits/stdc++.h>
#include <iostream>
#include <string>

#define loop(a,c) for(int i=a;i<n;i++)
#define pb push_back
#define eps 1e-9
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p[n+1];
    for (int i=1;i<=n;i++){
        if(i==1)
            cin>>p[1];
        else{
            int x;
            cin>>x;
            p[i]=p[i-1]+x;
        }
    }

    int m;
    cin>>m;
    while (m--){
        int mid ,st=1,en=n;
        int x;
        cin>>x;
        while (st<en){
            mid =(en+st)/2;

            if(p[mid]>=x)
                en =mid;
            else
                st=mid+1;
        }
        cout<<st<<endl;
    }
    return 0;
}
