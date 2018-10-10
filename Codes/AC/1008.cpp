#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n,k;
string s;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j;
    scanf("%d%d",&n,&k);
    cin>>s;
    int hc,rc;
    hc=s[0]=='a';
    rc=s[0]=='b';
    i=0,j=0;
    int ans=0;
    while(i<n && j<n)
    {
        if(min(hc,rc)<=k)
        {
            ans=max(ans,j-i+1);
            
            j++;
            if(j<n)
            {
                  hc+=(s[j]=='a');
                  rc+=(s[j]=='b');
            }
        }
        else
        {
            hc-=(s[i]=='a');
            rc-=(s[i]=='b');
            i++;
        }
    }
    printf("%d\n",ans);
    return 0;
}
