#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;


int main()
{
 int t;
 while(cin>>t){
    int k;
    cin>>k;
    int a[t+1],i;
    for(i=0;i<t;i++){
        cin>>a[i];
    }
    sort(a,a+t);
    int maximum=a[t-1]+k;
   for(i=0;i<t-1;i++){
    if(a[i]<a[t-1]){
        if(k>=a[i]-a[t-1]){
            int p=a[t-1]-a[i];
            a[i]+=p;
            k-=p;

        }
        else{
            a[i]+=k;
            k=0;
        }
    }
   }
   if(k>0){
   if(k%t==0){
    int div=k/t;
    for(i=0;i<t;i++){
        a[i]+=div;
    }
   }
   else{
    int div=k/t;
    if(div==0){
            int dv=k%t;
        for(i=0;i<dv;i++){
            a[i]+=1;
        }
    }
    else{
         for(i=0;i<t;i++){
            a[i]+=div;
        }
         int dv=k%t;
          for(i=0;i<dv;i++){
            a[i]+=1;
        }
    }
   }
   }
 sort(a,a+t);
    cout<<a[t-1]<<" "<<maximum<<endl;
 }
 return 0;
}
