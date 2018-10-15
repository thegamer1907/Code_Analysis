#include<set>
#include<map>
#include <unordered_map>
#include <unordered_set>
#include<list>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<queue>
#include<stack>
#include<complex>
#include<sstream>
#include<iostream>
#include<fstream>
#include<algorithm>
#include<numeric>
#include<utility>
#include<functional>
#include<stdio.h>
#include<assert.h>
#include<memory.h>
#include<bitset>
#include<math.h>
#include <strings.h>
#include <fstream>
typedef long long ll;
using namespace std;




int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    int n,m;
    vector<int> a;
    a.clear();
    cin>>n>>m;
    int maxi = -1;
    for(int i = 1 ; i <= n ; i++){
        int x;
        cin>>x;
        maxi = max(x , maxi);
        a.push_back(x);
    }
    int ansTwo = maxi + m;
    int toFill = 0;
    for(int i : a){
        toFill += maxi - i ;
    }
    m -= toFill;
    if(m <= 0){
        cout<<maxi<<" "<<ansTwo<<endl;
        exit(0);
    }
    maxi += (m + n - 1) / n;
    cout<<maxi<<" "<<ansTwo<<endl;
    return 0;
}

