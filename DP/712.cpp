#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



int main(){
    string s;
  cin >> s;
    long int m,i=0,l,r;
   m=s.length();
    long int c[m+2];
    c[0]=0;
    while(s[i+1] != '\0'){
        if(s[i]==s[i+1]){
            c[i+1]=c[i]+1;
        }
        else{
            c[i+1]=c[i];
        }
        i++;
    }
    
    
    cin >> m;
    
    
    for(i=0;i<m;i++){
        cin >> l >> r;
        cout << c[r-1]-c[l-1] << endl;
        
    }
    
    
    return 0;
}