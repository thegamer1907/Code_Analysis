#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n,0);
    int max_score = 0;
    for(int i=0;i<n;++i){
        cin >> a[i];
        
    }
    
    int score = 0;
    for(int i=0;i<n;++i){
        for(int j=i;j<n;++j){
            // cout << i << " " << j << endl;
            score = 0;
            for(int k=0;k<i;++k){
                if(a[k]==1) ++score;
            }
            for(int k=i;k<=j;++k){
                if(a[k]==0) ++score;
            }
            for(int k=j+1;k<n;++k){
                if(a[k]==1) ++score;
            }
            max_score = max(max_score, score);
        }
    }
    cout << max_score << endl;
}