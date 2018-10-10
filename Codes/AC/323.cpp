#include <iostream>
#include <map>
#include <cmath>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <string.h>
#include <stack>
using namespace std;

int n,a[100005] = {0};

int check(int i,int x){
    if(a[i]>=x&&x>a[i-1])return 1;
    else if(a[i]<x)return -1;
    else return 0;

}

int main(){

    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        a[i]+=a[i-1];
    }
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        int l = 1,r = n+1,mid;
        while(l<=r){
            mid = (l+r)/2;
            int c = check(mid,x);
            if(c==1)break;
            if(c==-1)l = mid;
            if(c==0)r = mid;
        }
        cout << mid<<endl;
    }

    return 0;
}
