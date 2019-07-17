#include <bits/stdc++.h>
 
using namespace std;

 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout.tie(NULL);
    unsigned long long n,m,k,s=0,c=0,p;
    cin>>n>>m>>k;
    int a[m];
    p=k;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        if(a[i]<=p)
        c++;
        else
        {
            if(c==0)
            p+=((a[i]-p-1)/k+1)*k;
            else {
                s++;
                p+=c;
                c=0;
            }
            i--;
        }
    }
    cout<<s+1;
    return 0;
}