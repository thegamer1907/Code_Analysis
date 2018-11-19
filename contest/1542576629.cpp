#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct mystruct{
  long long v;
  mystruct * next;
};
int structcmp(const void *v1,const void *v2){return ((mystruct *)v1)->v - ((mystruct *)v2)->v;}
int intcmp(const void *v1,const void *v2){return *(int *)v1-*(int *)v2;}
long long minn(long long v1,long long v2){return v1<v2?v1:v2;}
long long maxx(long long v1,long long v2){return v1>v2?v1:v2;}


int divide[20]={0};
int waste[20]={0};


int main(){
  int shi,fen,miao;
  int st,to;
  cin>>shi>>fen>>miao>>st>>to;

  st = st % 12;
  to = to % 12;

  if(fen == 0 && miao == 0){
    waste[shi % 12] = 1;
  }else{
    divide[shi % 12] = 1;
  }

  if(miao == 0){
    if(fen % 5 == 0){
      waste[fen / 5] = 1;
    }else{
      divide[fen / 5] = 1;
    }
  }else{
    divide[fen / 5] = 1;
  }

  if(miao % 5 ==0){
    waste[miao / 5] = 1;
  }else{
    divide[miao / 5] = 1;
  }

  bool canl = true;
  bool canr = true;

  int i;
  for(i=st;i%12!=to;i++,i%=12){
    if(waste[i]==1 || divide[i]==1){
      canl =false;
      break;
    }
  }

  for(i=to;i%12!=st;i++,i%=12){
    if(waste[i]==1 || divide[i]==1){
      canr =false;
      break;
    }
  }

  if(canl || canr){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }

  return 0;
}
