#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int n,m,temp;
cin>>n>>m;
int p;
int max1=-1;
vector<int>v;
for(int i=0;i<n;i++){
  cin>>temp;
  v.push_back(temp);
max1=max(max1,temp);
}
p=m;
for(int i=0;i<n;i++){
if(v[i]!=max1){
  p=p-max1+v[i];
}
}
if(p<0){
  cout<<max1<<" "<<max1+m<<endl;
}
else{
  temp=p/n;
if(p%n!=0){
  temp++;
}
cout<<max1+temp<<" "<<max1+m<<endl;





}






}