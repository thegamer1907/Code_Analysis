#include<iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
#define SWAP(a,b) { \
                    a^=b;\
                    b^=a;\
                    a^=b;\
}
int main()
{

    int i,j,k,m,n,val,t=0;
    string str;
    char tem;
    cin>>n>>t;
    cin>>str;
    for(i=0;i<t;i++){
        for(j=0;j<n-1;j++)
            if(str[j]=='B' && str[j+1]=='G') {str[j]='G';str[j+1]='B';     j++;}
    }
    cout<<str<<endl;
    //free();   //if pointer array
    return 0;
}
