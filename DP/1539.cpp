#include <bits/stdc++.h>

using namespace std;
int res[200];
int main()
{
int n,sum=1,o=0,q=0,p=0;
   cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0&&a[i-1]==0&&i!=0)sum++;
        
         if(a[i]==1){ res[q]=sum;
                        // if(i==0&&a[i]==1)o=1;
                        sum=0;
                        o++;
                        q++;}
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            p++;
        }
        if(a[i]==1)
            p--;
    
    if(p<0)p=0;
    res[q]=p;
    q++;
   }sort(res,res+200);
    if(o==n)cout<<n-1;
else
    cout<<res[199]+o; 
    return 0;
}