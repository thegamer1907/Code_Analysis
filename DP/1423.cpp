#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
void findMin(int n,int s){
      for(int i=1;i<=n;i++){
            if(i==1){
                  int p,flag=0;
                  for(int j=1;j<=9;j++){
                        if(s-j>=0&&s-j<=9*(n-i)){
                              p=j;
                              s=s-j;
                              flag=1;
                              break;
                        }
                  }
                  if(flag){ cout<<p;}
                        else { cout<<"-1";break;}
            }      
            else {
                        int p,flag=0;
                        for(int j=0;j<=9;j++){
                              if(s-j>=0&&s-j<=9*(n-i)){
                                          p=j;
                                          flag=1;
                                          s=s-j; break;
                              }      
                        }
                        if(flag) cout<<p;
            }
      }
}

void findMax(int n,int s){
      for(int  i=1;i<=n;i++){
                  if(i==1){
                              int p,flag=0;
                              for(int j=9;j>=1;j--){
                                    if(s-j>=0&&s-j<=9*(n-i)){
                                                p=j;
                                                flag=1;
                                                s=s-j;
                                                break;
                                    }
                              }
                              if(flag){ cout<<p;}
                              else { cout<<"-1 "; break;}
                  }
                  else{
                              int p,flag=0;
                              for(int j=9;j>=0;j--){
                                    if(s-j>=0&&s-j<=9*(n-i)){
                                                p=j;
                                                flag=1;
                                                s=s-j;
                                                break;
                                    }
                              }
                              if(flag) cout<<p;
                  }
      }
}
*/
int  main(){
      ios::sync_with_stdio(false);
      cin.tie(NULL);
      int n;
      cin>>n;
      
      int a[n];
      int ans=0;
      for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]) ans++;
      }
      bool check=true;
      for(int i=0;i<n;i++){
            check&=a[i]==1;
      }
      if(check) cout<<ans-1<<"\n";
      else {
      int b[n];
      int i=0,k=0;
      while(i<n){
            if(a[i]){
                  int j=i,l=0;
                  while(j<n&&a[j]){ j++;i++;l++;}
                  b[k++]=-l;
            }
            else{
                  int j=i,l=0;
                  while(j<n&&!a[j]){ j++;i++;l++;}
                  b[k++]=l;
            }
      }
    // kadane
      int mssf=0,mseh=0;
      for(int i=0;i<k;i++) {
            mseh=mseh+b[i];
            if(mseh<0) mseh=0;
            mssf=max(mssf,mseh);
      }
      cout<<mssf+ans;
      }
      
      return 0;
}