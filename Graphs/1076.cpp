#include <bits/stdc++.h>
using namespace std;
bool vst[30001];
int arr[30001];
void dfs(int x){
    vst[x] = true;
    if(!vst[arr[x]]){
        dfs(arr[x]);
        }
}
int main()
{
    int n,t,p;
    cin>>n>>t;
    for(int i=1; i<n; i++){

        cin>>p;
        arr[i] = i + p;
    }
    dfs(1);
    if(vst[t])
        cout<<"YES";
    else
        cout<<"NO";
return 0;

}
