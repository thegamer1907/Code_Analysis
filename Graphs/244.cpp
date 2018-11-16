#include <bits/stdc++.h>
using namespace std;

int main()
{   int n,t;
    cin>>n>>t;
    string r;
    cin>>r;
    for(int i=0;i<t;i++){
        for(int j=0;j<n-1;){
            if(r[j]=='B' && r[j+1]=='G'){
                r[j]='G';
                r[j+1]='B';
                j=j+2;
            }
            else j++;
        }
    }
    cout<<r<<endl;

        return 0;
}
