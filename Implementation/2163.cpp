#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sumx=0,sumy=0,sumz=0;
    cin>>n;
    int arrx[n],arry[n],arrz[n];
    for(int i=0;i<n;i++){
        cin>>arrx[i]>>arry[i]>>arrz[i];
        sumx+=arrx[i];
        sumy+=arry[i];
        sumz+=arrz[i];
    }
    if(sumx==0&&sumy==0&&sumz==0)
        cout<<"YES"<<endl;
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
