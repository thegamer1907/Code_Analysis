#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> a,b;
    int n,p,m,l,r,o=0,mi,g;
    cin>>n;
    int j=1;
    for (int i=0;i<n;i++){
        cin>>p;
        g=j;
        for (j;j<g+p;j++){
            a.push_back(j);
            b.push_back(i+1);
            }

    }

    //for (int i=0;i<j-1;i++)cout<<a[i]<<" "<<b[i]<<endl;
    cin>>m;
    for (int i=0;i<m;i++){
        cin>>p;
    l=0;
    r=a.size();
        while(l<r){
            mi=(l+r)/2;
            if (a[mi]==p){ o++;g=mi; break;}
            if (a[mi]<p)
                l=mi+1;
                else r=mi;
    }
    cout<<b[g]<<endl;
    }
    return 0;
}
