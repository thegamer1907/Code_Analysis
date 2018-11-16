#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;

    int a[n];
    int cnt=0;
    for(int i=1; i<n+1; i++){
        cin>>a[i];
    }

    for(int i=1; i<n+1; i++){
        if(a[i] == 0) {
            cnt += 0;
            continue;
        }
        if(a[i]>=a[k]) cnt++;
    }

    cout<<cnt;
    return 0;
}