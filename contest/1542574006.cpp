#include <iostream>
#include <stack>
#include <queue>
#include <map>
#include <vector>
#include <cstdio>
#include <string>
#include <climits>
#include <cmath>
#include <fstream>
#include <cstring>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int n,k,x;
    cin>>n>>k;
    map<int,int> arr;
    for(int i = 0; i < n; i++){
        int tmp = 0;
        for(int j = 0; j < k; j++){
            cin>>x;
            tmp += x*(1<<j);
        }
        arr[tmp]++;
    }
    bool ans = false;
    for(int i = 0; i < (1<<k); i++){
        for(int j = 0; j < (1<<k); j++){
            if((i&j) == 0 && arr.find(i) != arr.end() && arr.find(j) != arr.end()){
                ans = true;
            }
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
