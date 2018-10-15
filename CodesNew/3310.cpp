#define io std::ios_base::sync_with_stdio(false)

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    io;
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    std::sort(v.begin(), v.end());
    int kmin, kmax = v.back() + m;
    for(int i = 1; i < v.size(); i++){
        int na = (v[i] - v[i - 1]) * i;
        if(na > m || na == m){
            std::vector<int>::iterator it = std::max_element(v.begin(), v.end());
            kmin = (*it);
            m = 0;
            break;
        }else{
            m -= na;
        }
    }
    if(m){
        kmin = v.back() + (m + n - 1) / n;
    }
    cout<<kmin<<" "<<kmax;
return 0;}
