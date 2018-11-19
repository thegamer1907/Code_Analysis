#include<bits/stdc++.h>

using namespace std;

int main(){
  int  h,m,s,t1,t2;
  cin>>h>>m>>s>>t1>>t2;


  if(!(m==0 && s==0)){
    if(h!=12){
    h=h*10+1;}
    else{
      h=5;
    }
  }
  else{
    h%=12;
    h=h*10;
  }
  if(s!=0){
    m=m*2+1;
  }
  else{
    m=m*2;
  }
  s=2*s;
  t1%=12;
  t2%=12;
  t1*=10;
  t2*=10;
  int flag1=0,flag2=0;
  if(t1<=t2){  for(int i=t1;i<=t2;i++){
    if(i==h || i==s || i==m ){flag1=1;}
  }
  for(int i=0;i<=120-(t2-t1);i++){

    if((t2+i)%120==h || (t2+i)%120==s || (t2+i)%120==m ){flag2=1;}

  }
}
  else{
    for(int i=t2;i<=t1;i++){
      if(i==h || i==s || i==m ){flag1=1;}
    }
    for(int i=0;i<=120-(t1-t2);i++){

      if((t1+i)%120==h || (t1+i)%120==s || (t1+i)%120==m ){flag2=1;}

    }
  }
  if(flag1==1 && flag2==1){cout<<"NO\n";}
  else{cout<<"YES\n";}
}
