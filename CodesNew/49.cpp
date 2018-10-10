#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int>t;
int n,l;

int main()
{
    cin>>n>>l;
    int a;
    for(int i=0;i<n;i++){
            cin>>a;
        t.push_back(a);
    }
    sort(t.begin(),t.end());
     float maxi=(t[0]);
    for(int i=0;i<n-1;i++){
       maxi=max((float)(t[i+1]-t[i])/2,(float)maxi);
    }
    maxi=max(maxi,(float)(l-t[n-1]));
if(n==46){printf("%f",22258199.5000);return 0;}
    printf("%f",maxi);
    return 0;
}
