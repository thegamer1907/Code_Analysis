#include<iostream>
using namespace std;
int main(){

int n,m,c;
cin>>n>>m;

int *a=new int[n];
int max=0;

for(int i=0; i<n; i++){
  cin>>a[i];
if(a[i]>max){
  max=a[i];
  c=max;
}


}
while(1){
  int sum=0;
for(int i=0; i<n; i++){

  sum+=max-a[i];


}

if(sum>=m){
  break;
}
else{
  max+=1;
}

}

cout<<max<<" "<<c+m<<endl;

}
