#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    char q[100001];
    cin>>q;
    int x=strlen(q);
    for(int i=0;i<t;i++){
        int idx=0;
    while(idx+1<x)
    {
        if(q[idx]=='B' && q[idx+1]=='G')
        {
            swap(q[idx],q[idx+1]);
            idx+=2;
        }
        else
        idx++;
    }
    }
    cout<<q;
}