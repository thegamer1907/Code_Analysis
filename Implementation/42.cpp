/*finding number of permutation cycle*/
#include <bits/stdc++.h>
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long int n, a, b, count=0;
  cin>>n>>a>>b;
  a--;
  b--;
  while(true){
  	a=a/2;
  	b=b/2;
  	count++;
  	if(a==b){
  		if(n==2){
  			cout<<"Final!"<<endl;
  			return 0;
  		}
  		else{
  			cout<<count<<endl;
  			return 0;
  		}
  	}
  	n=n/2;
  }
  return 0;
}
