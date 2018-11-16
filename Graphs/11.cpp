#include<bits/stdc++.h>
using namespace std;

int main()
{
  int i,j,k,m,sum=0,n,a=0;
  char s[51],ch;
    ///cin >> n;
  cin >> m >> n;
    for(i=0; i<m; i++){
        cin >> s[i];
    }
    for(j=1; j<=n; j++){
    for(i=0; i<m-1; i++){
    if(s[i]=='B' && s[i+1]=='G'){
        ch=s[i];
         s[i]=s[i+1];
          s[i+1]=ch;
          i++;
            
    }
            
            }
        
  }
    
    for(i=0; i<m; i++){
    cout << s[i];
}
    cout << endl;
    return 0;
    
}