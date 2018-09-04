#include <iostream>
using namespace std;

int main()
{
  int N,K;
  string S;
  int mx=0;
  int prev=0;
  cin>>N>>K;
  cin>>S;
  int a=0,b=0;
  for (int i=0;i<N;i++){
    if (i!=0){
      if (S[i-1]=='a')
	a--;
      else
	b--;
    }
    for (int j=prev;j<N;j++){
      if (S[j]=='a'){
	if (min(a+1,b)>K)
	  break;
	else
	  a++;
      }
      else{
	if (min(a,b+1)>K)
	  break;
	else
	  b++;
      }
      prev++;
    }
    mx=max(mx,prev-i);
  }
  cout<<mx<<endl;
  return 0;
}
