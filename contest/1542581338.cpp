#include<iostream>
#include<stdio.h>
#include<stdlib.h>

#define UNKNOW (0)
using namespace std;
struct mystruct{
  long long v;
  mystruct * next;
};
int structcmp(const void *v1,const void *v2){return ((mystruct *)v1)->v - ((mystruct *)v2)->v;}
int intcmp(const void *v1,const void *v2){return *(int *)v1-*(int *)v2;}
long long minn(long long v1,long long v2){return v1<v2?v1:v2;}
long long maxx(long long v1,long long v2){return v1>v2?v1:v2;}

long long kp[100010][10];//know pro

long long cnt[10]={0};

int n,k;

bool p1(){
  int i;
  for(i=0;i<n;i++){
    if(kp[i][0] == UNKNOW)
      return true;
  }
  return false;
}

bool p2(){
  int i;
  long long v0cnt = 0;
  long long v1cnt = 0;
  for(i=0;i<n;i++){
    if(kp[i][0] == UNKNOW && kp[i][1] == UNKNOW)
      return true;
    else if(kp[i][0] == UNKNOW)
      v0cnt++;
    else if(kp[i][1] == UNKNOW)
      v1cnt++;
  }
  if(v0cnt !=0 && v1cnt != 0)
    return true;
  return false;
}

long long fv(long long v){
  return v==UNKNOW?0:1;
}

bool p3(){
  int i;
  long long vc[10] = {0};

  for(i=0;i<n;i++){
    long long detectv = (fv(kp[i][2])<<8)+ (fv(kp[i][1])<<4) + (fv(kp[i][0])<<0);
    if(detectv == 0)
      return true;
    if(detectv == 0x001)
      vc[1]++;
    if(detectv == 0x010)
      vc[2]++;
    if(detectv == 0x100)
      vc[3]++;
    if(detectv == 0x110)
      vc[4]++;
    if(detectv == 0x101)
      vc[5]++;
    if(detectv == 0x011)
      vc[6]++;
  }
  if(vc[1] * vc[2] != 0 || vc[2] * vc[3] != 0 || vc[3] * vc[1] != 0)
    return true;

  if(vc[1] * vc[4] != 0 || vc[2] * vc[5] != 0 || vc[3] * vc[6] != 0)
    return true;

  return false;
}

bool p4(){
  int i;
  long long vc[20] = {0};

  for(i=0;i<n;i++){
    int detectv = (fv(kp[i][3])<<12)+ (fv(kp[i][2])<<8)+ (fv(kp[i][1])<<4) + (fv(kp[i][0])<<0);
    if(detectv == 0)
      return true;
    if(detectv == 0x0001)vc[1]++;
    if(detectv == 0x0010)vc[2]++;
    if(detectv == 0x0100)vc[3]++;
    if(detectv == 0x1000)vc[4]++;

    if(detectv == 0x1110)vc[5]++;
    if(detectv == 0x1101)vc[6]++;
    if(detectv == 0x1011)vc[7]++;
    if(detectv == 0x0111)vc[8]++;

    if(detectv == 0x1100)vc[9]++;
    if(detectv == 0x1010)vc[10]++;
    if(detectv == 0x0110)vc[11]++;
    if(detectv == 0x1001)vc[12]++;
    if(detectv == 0x0101)vc[13]++;
    if(detectv == 0x0011)vc[14]++;
  }

  long long ok1=0;
  for(i=1;i<=4;i++){
    ok1+= (vc[i]!=0);
  }
  if(ok1 > 1)
    return true;

  if(vc[9] * vc[14] !=0 || vc[10] * vc[13] !=0 || vc[11] * vc[12] !=0)
    return true;

  if(vc[1] != 0){
    if(vc[5] !=0 || vc[9] != 0|| vc[10] != 0|| vc[11] != 0)
      return true;
  }else if(vc[2]!=0){
    if(vc[6] !=0 || vc[9] != 0|| vc[12] != 0|| vc[13] != 0)
      return true;
  }else if(vc[3]!=0){
    if(vc[7] !=0 || vc[10] != 0|| vc[12] != 0|| vc[14] != 0)
      return true;
  }else if(vc[4]!=0){
    if(vc[8] !=0 || vc[11] != 0|| vc[13] != 0|| vc[14] != 0)
      return true;
  }
  return false;
}

int main(){
  cin>>n>>k;
  int i,j;
  for(i=0;i<n;i++){
    for(j=0;j<k;j++){
      scanf("%lld", &kp[i][j]);
    }
  }
  bool ans;
  if(k == 1){
    ans = p1();
  }else if(k == 2){
    ans = p2();
  }else if(k == 3){
    ans = p3();
  }else{
    ans = p4();
  }
  if(ans){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
  return 0;
}
