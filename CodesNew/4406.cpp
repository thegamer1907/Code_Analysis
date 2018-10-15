#include <iostream>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);
  int n,i,j;
  cin>>n;
  string s[n+1];
  int last[n+1];
  for (i=0;i<n;i++)
    cin>>s[i];
  last[n-1]=s[n-1].length();
  for (i=n-2;i>=0;i--){
    bool smaller=false;
    for (j=0;j<s[i].length();j++){
      if (j<last[i+1] && s[i][j]>s[i+1][j] && smaller==false)
	break;
      if (j<last[i+1] && s[i][j]<s[i+1][j])
	smaller=true;
      if (smaller==false && j>=last[i+1])
	break;
    }
    last[i]=j;
  }
  for (i=0;i<n;i++){
    for (j=0;j<last[i];j++)
      cout<<s[i][j];
    cout<<endl;
  }
  return 0;
}
      
    
