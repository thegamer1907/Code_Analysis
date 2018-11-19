#include<bits/stdc++.h>
using namespace std;
int main(){
string s,ss[102];
cin>>s;
int n;
cin>>n;
bool p=0;
for(int i=0;i<n;i++){
    cin>>ss[i];
    if(ss[i]==s)p=1;

}
if(p){
    cout<<"YES";
    return 0;
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(ss[i][1]==s[0]&&ss[j][0]==s[1])p=1;
    }
}
if(p)cout<<"YES";
else cout<<"NO";


}


/*#include <bits/stdc++.h>

using namespace std;
int n,p[102],d[102],tt[102],h[102],mx=0,g;

int pick(int i,int t,int arr[],int j){
if(i==n){long long s=0;
        for(int k=0;k<j;k++){cout<<arr[k]<<endl;s+=arr[k];}
        return 0;}
int ch1,ch2;
if(t+tt[i]<d[i]){arr[j]=i+1;
ch1=p[i]+pick(i+1,t+tt[i],arr,j+1);}
else ch1=pick(n,t,arr,j);
ch2=pick(i+1,t,arr,j);
return max(ch1,ch2);
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>tt[i]>>d[i]>>p[i];

cout<<pick(0,0,h,0);
}
*/
