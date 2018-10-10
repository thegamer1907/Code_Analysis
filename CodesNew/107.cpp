#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
int n;
int s[1000];
int l;
cin>>n>>l;
for(int i=0;i<n;i++){
    cin>>s[i];
}
sort(s,s+n);
int m=max(s[0],(l-s[n-1]))*2;
for(int i=1;i<n;i++){
    m=max(m,s[i]-s[i-1]);
}
cout<<fixed<<setprecision(8)<<(double)m/2.0;
return 0;
}
