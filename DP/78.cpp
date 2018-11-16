#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int n;
cin>>n;
int a[1000];
for(int i=0;i<n;i++)cin>>a[i];
int m;
cin>>m;
int b[1000];
for(int i=0;i<m;i++)cin>>b[i];
sort(a,a+n);
sort(b,b+m);
int count=0;
int check=0;
if(n==m){
    for(int i=0;i<n;i++){
        for(int j=0+check;j<m;j++){
            int t=abs(a[i]-b[j]);
            if(t>=0 && t<2){
                count++;
                check=j+1;
                break;
            }
        }
    }
    cout<<count;
  }
else if(n<m){
        int j=0;
    for(int i=0;i<n;i++){
        for(int j=0+check;j<m;j++){
           int t=abs(a[i]-b[j]);
            if(t>=0 && t<2){
                count++;
                check=j+1;
                break;
            }
        }
    }
    cout<<count;
}
else{
    for(int i=0;i<m;i++){
        for(int j=0+check;j<n;j++){
           int t=abs(a[j]-b[i]);
            if(t>=0 && t<2){
                count++;
                check=j+1;
                break;
            }
        }
    }
cout<<count;
}
}
