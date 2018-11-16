#include <iostream>
#include <bits/stdc++.h>


using namespace std;
long n,t;
bool k=false;
void dfs(long *a,long s)
{
    if(s==t)
    {
        k=true;
        return;
    }
    if(s>n)
    return;
    dfs(a,s+a[s]);

}
int main()
{
long s=1;
cin>>n>>t;
long a[n];
for(long i=1;i<n;i++)
    cin>>a[i];
    dfs(a,s);
    if(k==true)
        cout<<"YES";
        else
            cout<<"NO";

return 0;
}



