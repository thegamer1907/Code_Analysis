#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string q;
    cin>>n>>t;
    cin>>q;
    for(int i=0;i<t;i++){
        int j=0;
        while(j<n){
            if(q[j]=='B'&&q[j+1]=='G'){
                q[j]='G';
                q[j+1]='B';
                j=j+2;
            }
            else j++;
        }
    }
    cout<<q;
    return 0;
}
