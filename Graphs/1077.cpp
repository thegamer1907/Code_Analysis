#include <bits/stdc++.h>

using namespace std;

/* char in integer ==> A=17, a=49 */
// Rearange pair/map by second
bool cmp(const pair<string, int> &a, const pair<string, int> &b){
    return a.second < b.second;
}

int main(){
    int n,t ;
    cin>>n>>t ;
    int arr[n-1];
    for(int i=0 ; i<n-1 ; i++) cin>>arr[i];
    for(int i=0 ; i<n-1 ; i++) arr[i]+=(i+1);
    int index = 1;
    while(index < n){
        if(index == t){
            cout<<"YES";
            return 0;
        }
        index = arr[index-1];
    }
    if(index == t) cout<<"YES";
    else cout<<"NO";
	return 0;
}
