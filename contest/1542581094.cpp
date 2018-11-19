#include <bits/stdc++.h>

using namespace std;

const double eps=1e-8;

struct Aux{
  double a;
  int idx;
  
  bool operator<(const Aux& rhs)const {
    return a<rhs.a;
  }
}aux[10];
int main(){
  int a[10];
  int t1,t2;
  double b[10];
  for(int i=1;i<=3;i++){
    cin>>a[i];
  }
  cin>>t1>>t2;
  
  b[3]=a[3]*6.0;
  b[2]=double(a[2]*60.0+a[3])/10.0;
  b[1]=double(a[1]%12*3600.0+a[2]*60.0+a[3])/120.0;
  
  b[4]=t1%12*30.0;
  b[5]=t2%12*30.0;
  
  
  for(int i=1;i<=5;i++){
    aux[i].a=b[i];
    aux[i].idx=i;
  }
  
  sort(aux+1,aux+6);
  for(int i=1;i<=4;i++){
    if(aux[i].idx==4&&aux[i+1].idx==5){
      puts("YES");
      return 0;
    }
    if(aux[i].idx==5&&aux[i+1].idx==4){
      puts("YES");
      return 0;
    }
  }
  if(aux[1].idx==4&&aux[5].idx==5){
    puts("YES");
    return 0;
  }
  if(aux[1].idx==5&&aux[5].idx==4){
    puts("YES");
    return 0;
  }
  puts("NO");
}
