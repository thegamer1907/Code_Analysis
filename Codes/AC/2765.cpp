#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
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

#define MOD                 1000000007LL
#define EPS                 1e-9
#define io                  ios_base::sync_with_stdio(false);cin.tie(NULL);

const int N = 1e6 + 5;

int z[N];

int n;

void z_func(string &s){
    int l = 0, r = 0;
    n = s.size();
    for(int i = 1; i < n; i++){
        if(i > r){
            l = r = i;
            while(r < n && s[r - l] == s[r])    r++;
            r--;
            z[i] = r - l + 1;
        }else{
            int k = i - l;
            if(z[k] < r - i + 1)    z[i] = z[k];
            else{
                l = i;
                while(r < n && s[r - l] == s[r])    r++;
                r--;
                z[i] = r - l + 1;
            }
        }
    }
}

int main(){
	io;
    string s;
    cin >> s;
    z_func(s);
    int maxz = 0, res = -1;
    for(int i = 1; i < n; i++){
        // trace(i, z[i]);
        if(z[i] == n - i && maxz >= n - i){
            res = n - i;
            break;
        }
        maxz = max(maxz, z[i]);
    }
    // trace(res);
    if(res == -1){
        cout << "Just a legend\n";
        return 0;
    }
    for(int i = 0; i < res; i++)
        cout << s[i];
	return 0;
}








