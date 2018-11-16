#include<iostream>
using namespace std;




int main(){
  string str;
  cin>>str;
  int a=0;
  int b=0;
  int i=0;
  int tmp=0;
  while(str.size()-i>=2){
    tmp=0;
    if(str[i]=='A' && str[i+1]=='B'  && a==0){
      a=1;
      i+=2;
      tmp++;
    }
    if(a==1 && str[i]=='B' && str[i+1]=='A'){
      b=1;
      tmp++;
      i+=2;
    }
    if(tmp==0){
      i++;
    }
  }

  if(a==0 || b==0){
    a=0;
    b=0;
    i=0;
    tmp=0;
    while(str.size()-i>=2){
      tmp=0;
      if(str[i] == 'B' && str[i+1] == 'A' && b==0){
        b=1;
        i+=2;
        tmp++;
      }
      if(b==1 && str[i]=='A' && str[i+1]=='B'){
        a=1;
        i+=2;
        tmp++;
      }
      if(tmp==0){
        i++;
      }

    }

  }

  if(a==1 && b==1){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }


  return 0;
  
}
