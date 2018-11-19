#include <iostream>

using namespace std;

int h,m,s,t1,t2;
bool bl[43300],test;

int main()
{
    cin>>h>>m>>s>>t1>>t2;
    h=h*3600;
    h=h+60*m;
    m=m*720;
    h=h+s;
    m=m+s*12;
    s=s*720;
    t1*=3600;t2*=3600;
    while(h>=43200)h-=43200;
    while(m>=43200)m-=43200;
    while(s>=43200)s-=43200;
    bl[s]=bl[m]=bl[h]=true;
    //cout<<h<<" "<<m<<" "<<s<<" "<<t1<<" "<<t2<<'\n';
    for(int i=0;i<=43200;i++){
      if(i==t1||i==t2){
        if(test){
          cout<<"YES";
          return 0;
        } else test=true;
      }
      if(bl[i])test=false;
    }
    for(int i=0;i<=43200;i++){
      if(i==t1||i==t2){
        if(test){
          cout<<"YES";
          return 0;
        } else test=true;
      }
      if(bl[i])test=false;
    }
    cout<<"NO";
    return 0;
}
