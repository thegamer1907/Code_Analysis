#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+100;



char a[10],b[10];

int main(){
    scanf("%s",a);
    int n;
    cin>>n;
    int t=0,t1=0,t2=0;
    for(int i=0;i<n;i++){
        scanf("%s",b);
        if(b[0]==a[0]&&b[1]==a[1]){
            t=1;
        }
        if(b[0]==a[1]) {
            t1=1;
        }
        if(b[1]==a[0])
            t2=1;
    }
    if(t||(t1&&t2))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
