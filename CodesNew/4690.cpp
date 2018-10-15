#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define int ll

typedef pair<int, int> pii; 

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FileIn(file) freopen(file, "r", stdin)
#define FileOut(file) freopen(file, "w", stdout)
#define syso(n) cout<<n<<endl;  
#define sysom(message, n) cout<<message<<n<<endl;
#define all(c) c.begin(), c.end() 
#define tr(container, it )\
for(__typeof__(container.begin()) it = container.begin(); it != container.end(); it++) 
#define present(container, element) (container.find(element) != container.end())  //map, set
#define cpresent(container, element) (find(aint(container),element) != container.end()) //vector
#define what_is(x) cout << #x << " is " << x << endl; 
#define all(c) c.begin(), c.end() 

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif

int gcd(int a, int b){
    if (b==0) return a;
    return gcd(b, a%b);
} 

int lcm(int fir, int sec){
    return (fir*sec)/(gcd(fir, sec));
}

const int MOD = 1e9+7;

// --
// -- 
// -- 
// std::cout << std::fixed;
// std::cout << std::setprecision(26) << f << '\n';

// sort(arr, arr+n, greater<int>());

const int maxN = 5*1e5 + 12;
const int maxVal = 1e18;

int arr[maxN];
bool avail[maxN];

signed main(){
    fastio;
    int n;
    cin>>n;
    memset(avail, true, sizeof avail);
    memset(arr, -1, sizeof arr);
    for (int i = 0; i < n; ++i){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int ans = n;
    int times = n/2;
    for (int i = 0; i < n/2; ++i){
        while(true){
            if(arr[i]*2<=arr[times]){
                ans--;
                times++;
                break;
            }else{
                times++;
            }
            if(times>=n){
                break;
            }
        }
        if(times>=n){
            break;
        }
    }
    cout<<ans<<endl;
}