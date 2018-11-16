#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i,n,t;
    cin>>n>>t;
    char a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    while(t>0){
        for(i=0; i<n; i++){
            if(a[i]=='B' && a[i+1]=='G'){
                    char temp;
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                    i++;
                }
        }
        t--;
    }
    for(i=0; i<n; i++){
        cout<<a[i];
    }
    return 0;
}
