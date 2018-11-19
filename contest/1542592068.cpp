#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#define ull unsigned long long
#define ld long double
#define f first
#define ss second
#define PI acos(-1)
#define CS ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main(){
    CS;
    string s;cin>>s;
    int n;cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]==s)return cout<<"YES" , 0;
        for(int j=0;j<n;j++){
            if(arr[i][1]==s[0]&&arr[j][0]==s[1])return cout<<"YES" , 0;
        }
    }
    cout<<"NO";
    return 0;
}
