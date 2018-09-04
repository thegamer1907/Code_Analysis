#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int Arr[1000005];
int p[10000002];
int c[10000002];
int c2[10000002];
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> prm;
    for(int i =0;i<n;i++) {
            cin >> Arr[i];
            c[Arr[i]]++;
    }
    int q;
    cin >> q;
    for(int i =2;i<=10000000;i++){
      if(!p[i]) {
        prm.push_back(i);
        for(int j =i*2;j<=10000000;j+=i) {
            p[j] = 1;
        }
      }
    }
    for(int i =0;i<prm.size();i++){
        for(int j =prm[i];j<=10000000;j+=prm[i]) {
            if(c[j]) c2[i+1] += c[j];
        }
        c2[i+1]+=c2[i];
    }
    for(int i =0;i<q;i++) {
        int l,r;
        cin >> l >> r;
        int up = upper_bound(prm.begin(),prm.end(),r) - prm.begin();
        int lo = lower_bound(prm.begin(),prm.end(),l) - prm.begin();
        cout << c2[up]-c2[lo] << endl;
    }
    return 0;
}
