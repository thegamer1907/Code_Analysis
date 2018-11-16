#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int main()
{   int n,t;
    string s,z;
    cin>>n>>t;
    cin>>s;
    for(int j=1;j<=t;j++){
    for(int i=0;i<55;i++){
        if(s[i]=='B'&&s[i+1]=='G'){s[i]='G';
                                   s[i+1]='B';
                                   i++;
    }}
      }  cout<<s<<endl;
	return 0;
}