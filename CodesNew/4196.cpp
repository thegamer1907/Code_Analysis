#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,q; cin>>n>>q;
   long long int a[n], k[q];
    vector <long long int>pre; pre.push_back(0);
    int i;
    for(i=0; i<n; i++)
    {
        cin>>a[i]; pre.push_back((pre[i]+ a[i])*1ll);
    }
    //for(i=0; i<n+1; i++) cout<<pre[i];
    int m=0;long int index;
    for(i=0; i<q; i++)
    {
        cin>>k[i];
        if(k[i]>= pre[n]) {cout<<n<<" ";m=n;}
        else{
            if(i==0)
            {
                index= lower_bound(pre.begin(), pre.end(),k[i])-pre.begin();
                if(pre[index]== k[i]) {cout<<n-index<<" ";m=n-index-1;}
                else{ cout<<n-index+1<<" ";m=n-index;}
            }
            else{
                if(k[i-1]>=pre[n]){
                    index= lower_bound(pre.begin(), pre.end(), k[i])-pre.begin();
                    if(pre[index]== k[i]) {cout<<n-index<<" ";m=n-index-1;}
                    else{ cout<<n-index+1<<" ";m=n-index;}
                }
                else{
                    k[i]+=k[i-1];
                    if(k[i]>= pre[n]) cout<<n<<" ";
                    //if (index==n+1) cout<<n<<" ";
                    else{
                        index= lower_bound(pre.begin(), pre.end(), k[i])-pre.begin();
                        if(pre[index]== k[i]) cout<<n-index<<" ";
                            else cout<<n-index+1<<" ";
                    }

                }
            }
        }
    }
    return 0;
}
