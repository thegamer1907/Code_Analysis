#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <set>
#include <deque>
#define mp make_pair
using namespace std;

long long n,m,k;
vector <long long> nn,mm;

int main()
{
    cin>>n;
    nn.resize(n);
    for(int i=0;i<n;i++)
        cin>>nn[i];
    cin>>m;
    mm.resize(m);
    for(int i=0;i<m;i++)
        cin>>mm[i];
    int l1=0,l2=0;
    k=0;
    sort(nn.begin(),nn.end());
    sort(mm.begin(),mm.end());
   /* cout<<endl;
    for(int i=0;i<n;i++)
        cout<<nn[i]<<" ";
    cout<<endl;
    for(int i=0;i<m;i++)
        cout<<mm[i]<<" ";
    cout<<endl<<endl;*/
    while(l1<n)
    {
      //  cout<<nn[l1]<<" "<<mm[l2]<<"..........";
        if(abs(nn[l1]-mm[l2])<=1)
        {
          //  cout<<nn[l1]<<" "<<mm[l2]<<endl;
            k++;
            l2++;
            l1++;
        }
        else
        {
            if(nn[l1]<mm[l2])
                l1++;
            else l2++;
        }
    }
    cout<<k;
}
/*
4 3 3
2 3 1 1

*/
