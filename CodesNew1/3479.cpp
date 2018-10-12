#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,e,s=0,q=0;
    vector <int> v;
    cin >> n;
    int l=n;
    cin >>m;
    while (l--){
        cin >> e;
        s+=e;
        v.push_back(e);
    }
    int p=*max_element(v.begin(),v.end());
    for (int i=0;i<v.size();i++){
            q+=p-v[i];
        }
    if (q>m){
        cout <<p<<" "<<p+m;
    }
    else {
        int a=ceil((m-q)/(double)n)+p;
        cout <<a<<" "<<p+m;
    }
}
