#include <bits/stdc++.h>
#include <string.h>
#include <math.h>
using namespace std;
int main() {
        int n,t;
        cin>>n>>t;
        string s;
        cin>>s;
        int j,i = 1;
        int x = s.length();
        while (i<=t){
            for(int j = 0; j<x-1; j++){
               if(s[j]=='B'&&s[j+1]=='G') {
                   s[j] = 'G'; s[j+1] = 'B'; 
                    j++;
               }
                    
            }
            i++;
        }
        cout<<s<<endl;
        return 0;
}


