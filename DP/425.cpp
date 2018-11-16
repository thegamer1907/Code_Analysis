#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,m,n,j,k=0;
    cin>>n;
    long long int b[1000];
    for(i=0;i<n;i++)
        cin>>b[i];
    cin>>m;
    long long int g[1000];
    for(i=0;i<m;i++)
        cin>>g[i];
        sort(b,b+n);
        sort(g,g+m);

    for(i=0;i<n;i++){
    for(j=0;j<m;j++){
       if(abs(b[i]-g[j])<=1){
        k++;
        g[j]=-1;
        break;
       }
     }
    }
    cout<<k<<endl;
    return 0;
}
