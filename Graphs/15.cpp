#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    char s[50];
        for(i=0;i<n;i++){
            cin>>s[i];
        }
    for(int j=0;j<m;j++){
        for(i=0;i<n-1;i++){
            if(s[i]=='B'&&s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}