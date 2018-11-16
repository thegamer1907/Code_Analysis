#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ss=s.size();
    int A[ss+1];
    //int b[ss];
    A[0] = 0;
    A[1] = 0;
    for(int i=0; i<ss; i++){
        if(s[i]==s[i+1]){
            A[i+1]=A[i]+1;
        }
        else{
            A[i+1]=A[i];
        }
    }
    int n,a,b;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        cout<<A[b-1]-A[a-1]<<endl;
    }
}