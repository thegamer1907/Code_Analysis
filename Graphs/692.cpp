#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n,t;
  cin>>n>>t;
  string stri[51];
  cin>>stri[0];
  for(int j=0; j<t; j++)
    {
      stri[j+1]=stri[j];
      for(int i=n-1; i>0; i--)
	{
	  //cout<<stri[j+1][i]<<" "<<stri[j+1][i-1]<<endl;
	  if(stri[j][i]=='G' && stri[j][i-1]=='B')
	    {
	      stri[j+1][i]='B';
	      stri[j+1][i-1]='G';
	    }
	  // cout<<stri[j+1][i]<<" "<<stri[j+1][i-1]<<endl;
	  //cout<<endl;
	}
    }
  cout<<stri[t];
  return 0;
}
