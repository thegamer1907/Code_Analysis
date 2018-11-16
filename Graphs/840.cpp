#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main(){
    int n, t;
    string cad;
    scanf("%d%d", &n, &t);
    cin>>cad;
    while(t>0){
        for(int i=0; i<cad.size()-1; i++){
            if(cad[i]=='B' && cad[i+1]=='G'){
                cad[i]='G';
                cad[i+1]='B';
                i++;
            }
        }
        t--;
    }
    cout<<cad;
return 0;
}