#include <bits/stdc++.h>

using namespace std;

int x[int(6e5)],n,fp,sp;

int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>x[i];
    sort(x,x+n);
    reverse(x,x+n);
    int k=n;
    fp=0;
    sp=floor(n/2);
    //for(int i=0;i<n;i++) cout<<x[i]<<" ";
    //cout<<endl;
    while(fp!=sp&&sp!=n){
        if(x[fp]>=2*x[sp]){
            x[sp]=-1;
            sp++;
            fp++;
            k--;
        }
        else
            sp++;
    }
    cout<<k;
    return 0;
}
