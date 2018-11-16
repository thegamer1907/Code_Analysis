#include<algorithm>
#include<array>
#include<bitset>
#include<cassert>
#include<climits>
#include<cmath>
#include<complex>
#include<cstdio>
#include<string>
#include<ctime>
#include<deque>
#include<stack>
#include<functional>
#include<iomanip>
#include<map>
#include<numeric>
#include<iterator>
#include<memory>
#include<queue>
#include<random>
#include<set>
#include<tuple>
#include<utility>
#include<vector>

using namespace std;

#define INF 0x3f3f3f3f
#define debug printf
typedef long long ll;
const int N = 1e9+7;
const double pi = 2 * acos(0.0);

int n, t;
bool vis = false;

int main(){
    scanf("%d%d", &n, &t);
    vector<int> a(n);
    a[0] = 1;
    for(int i = 1; i < n; i++){
        scanf("%d", &a[i]);
    }
    puts("\n");
    for(int i = 1; i < t; ){
        i += a[i];
        if(i == t) vis=true;
        //debug("%d ", i);
    }
       
    vis ? puts("YES"):puts("NO");
    
    return 0;
}
