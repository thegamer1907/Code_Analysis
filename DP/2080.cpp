#include <iostream>
#include <set>

using namespace std;

int main(void){
    set<int> numSet;
    int aValues[100000 + 9];
    int lValues[100000 + 9];
    int mValues[100000 + 9];

    int n, m;
    cin >> n >> m;
    
    for(int i= 1; i<=n; i++){
        cin >> aValues[i];
    }
    
    for(int i= 1; i<=m; i++){
        cin >> mValues[i];
    }
    
    for(int i= n; i> 0; i--){
        numSet.insert(aValues[i]);
        lValues[i]= (int)numSet.size();
    }
    
    for (int i = 1; i <= m; i++) {
        cout<< lValues[mValues[i]] <<endl;

    }
    
    return 0;
}
