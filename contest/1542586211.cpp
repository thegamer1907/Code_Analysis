
#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(auto i=0; i<(n); i++)
#define mem(x,val) memset((x),(val),sizeof(x));
#define write(x) freopen(x,"w",stdout);
#define read(x) freopen(x,"r",stdin);
#define sqr(x) ((x)*(x))
#define pb push_back
#define clr clear()
#define inf (1<<30)
#define eps 1e-9
#define PI acos(-1)
#define bug printf("hello\n");

typedef long long i64;
typedef unsigned long long ui64;
typedef pair<int,int> pii;


int main() {
    //read("test.txt");
    int n, a = 0, b = 0;
    string target;
    cin>>target;
    cin>>n;
    for(int i = 0; i<n; i++){
        string s;
        cin>>s;
        if(s[0]==target[1]){
            a = 1;
        }
        if(s[1]==target[0]){
            b = 1;
        }
        if(s==target){
            a = b = 1;
        }
    }
    if(a==1 && b==1) printf("YES\n");
    else printf("NO\n");
    return 0;
}
