#include<bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
using namespace std;

int main(){

	// freopen("input.in","r",stdin);
	// freopen("output.out","w",stdout);
   	std::ios::sync_with_stdio(false);

    string p;
    string w[200];
    int n;
    cin>>p;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>w[i];
    }
    bool f = 0, s = 0;
    for(int i=0;i<n;i++){
        if(w[i] == p){
            cout<<"YES";
            return 0;
        }
        if(w[i][0] == p[1]){
            s = 1;
        }
        if(w[i][1] == p[0]){
            f = 1;
        }
        if(s && f){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";


}
