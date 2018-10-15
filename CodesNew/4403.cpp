#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {


    int n;
    scanf("%d",&n);
    vector<string>str;
    string a;
    for(int i=0;i<n;i++){
        cin>>a;
        str.push_back(a);
    }
    
    
    for(int i=n-1;i>=1;i--){
    
    
        if(str[i-1]>str[i]){ // make str1 smaller or equavilant to str2 which must be bigger 
           
            string requiredStr2="#";
            for(int j=1;j<(int)min(str[i-1].size(),str[i].size());j++){
            
                if(str[i-1][j]<=str[i][j])
                    requiredStr2+=str[i-1][j];
                else
                    break;
            
            }
            str[i-1]=requiredStr2;
                 
        }
    
    }
    for(int i=0;i<n;i++){
        cout<<str[i]<<endl;
    
    }
   
    return 0;
   
}
