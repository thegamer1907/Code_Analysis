#include<bits/stdc++.h>

using namespace std;

int main(){
int n,m;
scanf("%d%d",&n,&m);
if(n>m)cout<<"YES";
else if(m>n)cout<<"NO";
else{
map<string,bool>p;
string s;
for(int i=0;i<n;i++){
cin>>s;
p[s]=true;
}
int sme=0;
for(int i=0;i<m;i++){
cin>>s;
/*for(int j=0;j<n;j++)
{
if(s==p[j]){
sme++;break;}
}*/
if(p[s])sme++;
}
n-=sme;m-=sme;
if(sme%2)
n+=sme/2 + 1;
else
n+=sme/2;
m+=sme/2;
if(n>m)cout<<"YES";
else cout<<"NO";}
return 0;
}
    