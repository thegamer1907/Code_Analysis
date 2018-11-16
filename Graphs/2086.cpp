#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i=0;
    int k;
    cin>>n>>m;

    if(n<m){
        k=m;
        while(k>n)
        {
            if(k%2==0)
                k=k/2;
            else
                k++;
            i++;
        }
        if(k!=n)
            i=i+n-k;
    }

    else if(n>m){
        i=n-m;
    }
    else
        i=0;

    cout<<i;

    return 0;
}
