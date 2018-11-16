#include <bits/stdc++.h>

using namespace std;

long minl, maxr;


int main(){
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    
    vector<int> v1(n);
    
    int freq[100001] = {0};
    int count = 0;
    for(int i = 0; i < n; i ++){
        cin >> v1[i];
        if(freq[v1[i]] == 0)
            count ++;
        freq[v1[i]] ++;
    }
    
    int freq2[n];
    
    for(int i = 0; i < n; i ++){
        freq2[i] = count;
        if(freq[v1[i]] == 1)
            count --;
        freq[v1[i]] --;
    }
    
    int q;
    for(int i = 0; i < m; i ++){
        cin >> q;
        cout << freq2[q-1] << endl;
    }
    
    return 0;
}