#include<iostream>
using namespace std;
int n,m,k,i,l;
string a[10000],b[10000];
int main()
{
    cin>>n>>m;
    for(k=1;k<=n;k++)
    cin>>a[k];
    for(k=1;k<=m;k++)
    cin>>b[k];
    if(n>m) cout<<"YES"; else 
    if(m>n) cout<<"NO";
    else{
    for(k=1;k<=n;k++)
    for(i=1;i<=m;i++)
    if(a[k]==b[i]) l++;
     if(n%2==1 && l%2==1) cout<<"YES"; else if(n%2==1 && l%2==0) cout<<"NO";
     if(n%2==0)
     {
            if(l%2==0) cout<<"NO"; else cout<<"YES";
        }
        
    }
}
    
