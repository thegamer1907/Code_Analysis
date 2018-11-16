#include <bits/stdc++.h>
using namespace std;
#define lli unsigned long long

int main()
{
    lli i,j,t,n;
    string q;
    cin>>n>>t;
    cin>>q;

    for(i=0;i<t;i++){
        for(j=0;j<q.length();j++){
            if(q[j]=='B'&&q[j+1]=='G'){
            char temp = q[j];
            q[j]=q[j+1];
            q[j+1]=temp;
            j++;
            }
        }
    }

    cout<<q;
    return 0;
}
