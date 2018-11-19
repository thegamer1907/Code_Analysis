#include <bits/stdc++.h>
#define lli long long int
#define endl "\n"
using namespace std;

const lli inf = 1e18;
const int infInt=1e9;
const lli mod =1000000007;


lli val[100010],n,k;
lli a[100010];
int main(){
  cin.sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>k;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=k;j++){
      if(j<=k)
        cin>>val[j];
      else
        val[j]=0;
    }
    if(val[1]+val[2]+val[3]+val[4]==0){
      a[0]++;
    }
    if(val[1] and val[2] and val[3] and val[4]) {
    	a[1234]++;
    	continue;
    }
    if(val[1])
      a[1]++;
    if(val[2])
      a[2]++;
    if(val[3])
      a[3]++;
    if(val[4])
      a[4]++;

    if(val[1] and val[2])a[12]++;
    if(val[1] and val[3])a[13]++;
    if(val[1] and val[4])a[14]++;
    if(val[2] and val[3])a[23]++;
    if(val[2] and val[4])a[24]++;
    if(val[3] and val[4])a[34]++;

    if(val[1] and val[2] and val[3])a[123]++;
    if(val[1] and val[2] and val[4])a[124]++;
    if(val[1] and val[3] and val[4])a[134]++;
    if(val[2] and val[3] and val[4])a[234]++;

  }

  if(a[0]){
    cout<<"yes"<<endl;
    return 0;
  }
  bool yes=false;
  int omega=n-a[1234];
  while(true){
    if(omega==0)break;
    if(2*a[1]<=omega and 2*a[2]<=omega and 2*a[3]<=omega and 2*a[4]<=omega){
      yes=true;
      break;
    }

    if(2*a[1]>omega){
      //first
      if(a[123] and (2*a[2]>omega or 2*a[3]>omega)){
        a[1]--;  a[2]--; a[3]--; a[12]--;
        a[13]--; a[23]--; a[123]--;
        omega--;
        continue;
      }
      if(a[124] and (2*a[2]>omega or 2*a[4]>omega)){
        a[1]--;  a[2]--; a[4]--; 
        a[12]--;a[14]--; a[24]--; a[124]--;
        omega--;
        continue;
      }
      if(a[134] and (2*a[3]>omega or 2*a[4]>omega)){
        a[1]--;  a[3]--; a[4]--; 
        a[13]--;a[14]--; a[34]--; a[134]--;
        omega--;
        continue;
      }
      if(a[12] and 2*a[2]>omega){
        a[1]--;  a[2]--;
        a[12]--;
        omega--;
        continue;
      }
      if(a[13] and 2*a[3]>omega){
        a[1]--;  a[3]--;
        a[13]--;
        omega--;
        continue;
      }
      if(a[14] and 2*a[4]>omega){
        a[1]--;  a[4]--;
        a[14]--;
        omega--;
        continue;
      }
      //second
      if(a[123]){
        a[1]--;  a[2]--; a[3]--; a[12]--;
        a[13]--; a[23]--; a[123]--;
        omega--;
        continue;
      }
      if(a[124]){
        a[1]--;  a[2]--; a[4]--; 
        a[12]--;a[14]--; a[24]--; a[124]--;
        omega--;
        continue;
      }
      if(a[134]){
        a[1]--;  a[3]--; a[4]--; 
        a[13]--;a[14]--; a[34]--; a[134]--;
        omega--;
        continue;
      }
      if(a[12]){
        a[1]--;  a[2]--;
        a[12]--;
        omega--;
        continue;
      }
      if(a[13]){
        a[1]--;  a[3]--;
        a[13]--;
        omega--;
        continue;
      }
      if(a[14]){
        a[1]--;  a[4]--;
        a[14]--;
        omega--;
        continue;
      }
      a[1]--;
      omega--;
      continue;
    }
    if(2*a[2]>omega){
      //first
      if(a[123] and (2*a[1]>omega or 2*a[3]>omega)){
        a[1]--;  a[2]--; a[3]--; a[12]--;
        a[13]--; a[23]--; a[123]--;
        omega--;
        continue;
      }
      if(a[124] and (2*a[1]>omega or 2*a[4]>omega)){
        a[1]--;  a[2]--; a[4]--; 
        a[12]--;a[14]--; a[24]--; a[124]--;
        omega--;
        continue;
      }
      if(a[234] and (2*a[3]>omega or 2*a[4]>omega)){
        a[2]--;  a[3]--; a[4]--; 
        a[23]--;a[24]--; a[34]--; a[234]--;
        omega--;
        continue;
      }
      if(a[12] and 2*a[1]>omega){
        a[1]--;  a[2]--;
        a[12]--;
        omega--;
        continue;
      }
      if(a[23] and 2*a[3]>omega){
        a[2]--;  a[3]--;
        a[23]--;
        omega--;
        continue;
      }
      if(a[24] and 2*a[4]>omega){
        a[2]--;  a[4]--;
        a[24]--;
        omega--;
        continue;
      }
      //second
      if(a[123]){
        a[1]--;  a[2]--; a[3]--; a[12]--;
        a[13]--; a[23]--; a[123]--;
        omega--;
        continue;
      }
      if(a[124]){
        a[1]--;  a[2]--; a[4]--; 
        a[12]--;a[14]--; a[24]--; a[124]--;
        omega--;
        continue;
      }
      if(a[234]){
        a[2]--;  a[3]--; a[4]--; 
        a[23]--;a[24]--; a[34]--; a[234]--;
        omega--;
        continue;
      }
      if(a[12]){
        a[1]--;  a[2]--;
        a[12]--;
        omega--;
        continue;
      }
      if(a[23]){
        a[2]--;  a[3]--;
        a[23]--;
        omega--;
        continue;
      }
      if(a[24]){
        a[2]--;  a[4]--;
        a[24]--;
        omega--;
        continue;
      }
      a[2]--;
      omega--;
      continue;
    }
    if(2*a[3]>omega){
      //first
      if(a[123] and (2*a[1]>omega or 2*a[2]>omega)){
        a[1]--;  a[2]--; a[3]--; a[12]--;
        a[13]--; a[23]--; a[123]--;
        omega--;
        continue;
      }
      if(a[134] and (2*a[2]>omega or 2*a[4]>omega)){
        a[1]--;  a[3]--; a[4]--; 
        a[13]--;a[14]--; a[34]--; a[134]--;
        omega--;
        continue;
      }
      if(a[234] and (2*a[2]>omega or 2*a[4]>omega)){
        a[2]--;  a[3]--; a[4]--; 
        a[23]--;a[24]--; a[34]--; a[234]--;
        omega--;
        continue;
      }
      if(a[13] and 2*a[1]>omega){
        a[1]--;  a[3]--;
        a[13]--;
        omega--;
        continue;
      }
      if(a[23] and 2*a[2]>omega){
        a[2]--;  a[3]--;
        a[23]--;
        omega--;
        continue;
      }
      if(a[34] and 2*a[4]>omega){
        a[4]--;  a[3]--;
        a[34]--;
        omega--;
        continue;
      }
      //second
      if(a[123]){
        a[1]--;  a[2]--; a[3]--; a[12]--;
        a[13]--; a[23]--; a[123]--;
        omega--;
        continue;
      }
      if(a[134]){
        a[1]--;  a[3]--; a[4]--; 
        a[13]--;a[14]--; a[34]--; a[134]--;
        omega--;
        continue;
      }
      if(a[234]){
        a[2]--;  a[3]--; a[4]--; 
        a[23]--;a[24]--; a[34]--; a[234]--;
        omega--;
        continue;
      }
      if(a[13]){
        a[1]--;  a[3]--;
        a[13]--;
        omega--;
        continue;
      }
      if(a[23]){
        a[2]--;  a[3]--;
        a[23]--;
        omega--;
        continue;
      }
      if(a[34]){
        a[3]--;  a[4]--;
        a[34]--;
        omega--;
        continue;
      }
      a[3]--;
      omega--;
      continue;
    }
    if(2*a[4]>omega){
      //first
      //second
      if(a[124]){
        a[1]--;  a[2]--; a[4]--; a[12]--;
        a[14]--; a[24]--; a[124]--;
        omega--;
        continue;
      }
      if(a[134]){
        a[1]--;  a[3]--; a[4]--; 
        a[13]--;a[14]--; a[34]--; a[134]--;
        omega--;
        continue;
      }
      if(a[234]){
        a[2]--;  a[3]--; a[4]--; 
        a[23]--;a[24]--; a[34]--; a[234]--;
        omega--;
        continue;
      }
      if(a[14]){
        a[1]--;  a[4]--;
        a[14]--;
        omega--;
        continue;
      }
      if(a[24]){
        a[2]--;  a[4]--;
        a[24]--;
        omega--;
        continue;
      }
      if(a[34]){
        a[3]--;  a[4]--;
        a[34]--;
        omega--;
        continue;
      }
      a[4]--;
      omega--;
      continue;
    }
  }
  if(yes){
    cout<<"yes"<<endl;
  }else{
    cout<<"no"<<endl;
  }
  return 0;
}