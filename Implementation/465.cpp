#include <bits/stdc++.h>
using namespace std;
int main(){
int n,y,k,s=0,t[51];
cin>>n;
cin>>k;
for(int i=1;i<=n;i++){
    cin>>t[i];
}
if (t[k]==0){
    for (int i=1;i<k;i++){
        if (t[i]>0)
            s++;
        else
            break;
    }
}
else {
    s=k;
    for (int i=k+1;i<=n;i++){
        if (t[i]==t[k])
            s++;
        else
            break;
    }
}
cout<<s;
return 0;
}