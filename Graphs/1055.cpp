#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,t,i=1,f=0;
    cin>>n>>t;
    int a[n];
    for(int i=1;i<n;i++)cin>>a[i];
   // int visited[n]={0};
    while(i<=n){
        if(i>t)break;
        if(i==t){f=1;break;}
        i+=a[i];
    }
    if(f==0)cout<<"NO";
    else cout<<"YES";
	//cout<<"GfG!";
	return 0;
}