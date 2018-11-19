#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,l=0,a=0,b=0;
    string s;

    cin>> s >> n;
    string x[n];

    for(i=0;i<n;i++){
        cin>> x[i];
        if(x[i]==s)
            l=1;
        else if(x[i][0]==s[1] && x[i][1]==s[0])
            l=1;
        if(x[i][1]==s[0])
            a=1;
        if(x[i][0]==s[1])
            b=1;
    }

    if(l || (a && b))
        cout<< "YES";
    else
        cout<< "NO";

    return 0;
}
