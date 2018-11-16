#include<iostream>
using namespace std;
int main()
{
    int i,n,k=0;
    string s;
    cin>>n;cin>>s;
    for(i=0;i<s.size();i++){

        if(s[i]==s[i+1])
            k++;
    }
    cout<<k;
}
