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

int v(char ch){
  return ch-'a';
}

int ma(char a,char b){
  return v(a)*100+v(b);
}

int used[100000]={0};

string strs[110];

int main(){
  string ans;
  cin>>ans;
  int n;
  cin>>n;
  int i;
  for(i=0;i<n;i++){
    cin>>strs[i];
    used[ma(strs[i][0],strs[i][1])] = 1;
  }

  int j;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      used[ma(strs[i][1],strs[j][0])] = 1;
    }
  }

  if(used[ma(ans[0],ans[1])]){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }

  return 0;
}
