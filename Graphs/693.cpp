#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,j;
    cin>>n>>t;
    char q[n];
    cin>>q;

    for(int i=0;i<t;i++){
        j=0;
        while(j<n){
            if(q[j]=='B' && q[j+1]=='G'){
                q[j]='G';
                q[j+1]='B';
                j++;
            }
            j++;
        }
    }
    cout<<q;
    return 0;
}
