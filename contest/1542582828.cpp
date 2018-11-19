#include <bits/stdc++.h>

int main(void){
  int h, m, s, t1, t2;
  std::cin>>h>>m>>s>>t1>>t2;
  h=h%12;
  m=m%60;
  s=s%60;
  double hours=0.0, minutes=0.0, seconds=0.0;
  seconds=s/5.0;
  minutes=(m+(s/60.0))/5;
  hours=h+(m/(5*60.0))+(s/(5*3600.0));



  double arr[3];
  arr[0]=seconds;
  arr[1]=hours;
  arr[2]=minutes;

  std::sort(arr, arr+3);

  int encontradas=0;
  int mint, maxt;
  mint=std::min(t1, t2);
  maxt=std::max(t1, t2);
  for(int i=0;i<3;i++){
    double aux=arr[i];
    if(arr[i]>mint && arr[i]<maxt) encontradas++;
  }
  if(encontradas==0 || encontradas==3) std::cout<<"YES\n";
  else std::cout<<"NO\n";
  return 0;
}
