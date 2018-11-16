#include <iostream>
#include <vector>
using namespace std;

int main()
{
    short n,k,p;
    cin>>n>>k;
    vector<int> seq(n);
    for(int i=0;i<n;i++){
        cin>>seq[i];
    }
    p=seq[k-1];
    k=0;
    for(int i=0;i<n;i++){
        if(seq[i]>=p && seq[i]>0)
        {
            k++;
        }
    }
    cout<<k;
    return 0;
}