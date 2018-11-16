#include <iostream>
#include<bits/stdc++.h>
using namespace std;
multiset<char>m;
int main()
{
    int n,t;
    string s;
    bool hswaped=false;
    cin>>n>>t>>s;
    for(int i=0;i<t;i++){
        for(int j=0;j<n;j++){
                 if(hswaped==true){
                    hswaped=false;
                 }

               else{
                    if(s[j]=='B'&&s[j+1]=='G'){
                        s[j]='G';
                        s[j+1]='B';
                        hswaped=true;
                    }

                }

        }
    }
    cout<<s<<endl;



    return 0;
}
