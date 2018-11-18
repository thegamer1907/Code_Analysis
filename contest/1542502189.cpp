#include <iostream>
#include <map>
#include <cassert>
using namespace std;
int arr[100001][5];
int N,K;
map<string,int>cnt;

int main(){
  cin>>N>>K;
  for (int i=0;i<N;i++)
    for (int j=0;j<K;j++)
      cin>>arr[i][j];
  for (int i=0;i<N;i++){
    bool flag=false;
    for (int j=0;j<K;j++)
      if (arr[i][j])
	flag=true;
    if (!flag){
      cout<<"YES"<<endl;
      return 0;
    }
  }
  for (int i=0;i<N;i++){
    string S="";
    for (int j=0;j<K;j++)
      S+=char(arr[i][j]+'0');
    //cout<<S<<endl;
    cnt[S]++;
  }
  for (int i=0;i<(1<<K);i++){
    for (int j=0;j<(1<<K);j++){
      string S1="",S2="";
      for (int k=K-1;k>=0;k--)
	if ((i&(1<<k))!=0)
	  S1+='1';
	else
	  S1+='0';
      for (int k=K-1;k>=0;k--)
	if ((j&(1<<k))!=0)
	  S2+='1';
	else
	  S2+='0';
      //cout<<S1<<' '<<S2<<endl;
      bool flag=false;
      for (int k=0;k<K;k++){
	if (S1[k]=='1' && S2[k]=='1'){
	  flag=true;
	  break;
	}
      }
      if (flag)
	continue;
       if (cnt[S1]>=1 && cnt[S2]>=1){
	 assert(S1!=S2);
	cout<<"YES"<<endl;
	return 0;
      }
    }
  }
  cout<<"NO"<<endl;
}
