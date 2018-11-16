#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int d=0,n=s.size();
    int dp[n+1];
    dp[0]=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
           d++;
           dp[i+1]=d;
        }
        else
          dp[i+1]=dp[i];
    }

    int m;
    cin>>m;
    int a[m],b[m];

    for(int i=0;i<m;i++)
      cin>>a[i]>>b[i];

    for(int i=0;i<m;i++)
      cout <<dp[b[i]-1]-dp[a[i]-1] << endl;

    return 0;
}
