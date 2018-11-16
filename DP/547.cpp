#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin>>s;
    int  *cum=new int[s.size()+1];
    
    for(int i=1;i<=s.size();i++){
        
        cum[i]=(s[i-1]==s[i])?cum[i-1]+1:cum[i-1];
    }
     
    int m,l,r;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>l>>r;
         cout<<cum[r-1]-cum[l-1]<<"\n";
      
    }
   
    
    return 0;
}