#include <bits/stdc++.h>
using namespace std;
bool myfunction (double i,double j) { return (i<j); }
int main() {
    string p;
    cin>>p;
    int ans=0,n,i,j;
    cin>>n;
    string s[n];
    for(i=0;i<n;i++)
        cin>>s[i];
    for(i=0;i<n;i++)
    {
        if(s[i]==p)
            ans=1;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            string x;
            x.push_back(s[i][1]);
            x.push_back(s[j][0]);
            if(x==p)
                ans=1;
        }
    }
    if(ans)
        cout<<"yes";
    else
        cout<<"no";
    
	// your code goes here
	return 0;
}
