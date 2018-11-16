#include<bits/stdc++.h>
using namespace std;

int main(){
 int arr[100001];
 map<int,int>mp;
 set<int>st;
 int n,m;
 cin >> n >> m;
 for(int i=1;i<=n;i++){
    cin >> arr[i];
 }
 for(int i=n;i>=1;i--){
    st.insert(arr[i]);
    mp[i]=st.size();
 }
 int l;
 for(int i=1;i<=m;i++){
    cin >>l;
    cout << mp[l] <<endl;
 }

 return 0;
}
