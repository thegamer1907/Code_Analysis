#include <bits/stdc++.h>
 
using namespace std;

 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout.tie(NULL);
    unsigned long long n,m,k,s=0,c=0,p;
    cin>>n>>m>>k;
    unsigned long long a[m];
    p=k;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        //cout<<a[i]<<' '<<p<<' '<<s<<endl;
        if(a[i]<=p)
        c++;
        else
        {
            if(c==0)
            p+=((a[i]-p-1)/k+1)*k;
            else {
                s++;
                p+=c;
                if(a[i]>p)
                p+=((a[i]-p-1)/k+1)*k;
                c=0;
            }
            i--;
        }
    }
    cout<<s+1;
    return 0;
}