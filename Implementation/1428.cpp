#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    for(int j=0;j<m;j++)
    for(int i=0;i<n-1;)
    {
        if(s[i+1]>s[i])
        {
            swap(s[i+1],s[i]);
            i+=2;
        }
        else i++;
    }
    cout<<s;
}
