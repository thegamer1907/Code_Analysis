#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;

typedef long long ll;
#define foreq(i,a,b) for (int i = a; i <= b; i++)


#define printA(A,n) foreq(p,0,n-1){cout<<p<<": "<<A[p]<<endl;}
#define print(s) cout<<s<<endl

#define sq(a) (a)*(a)


// ios::sync_with_stdio(0);
// cin.tie(0);


int main(){
    int n,t;
    cin>>n>>t;
    string s,o;
    cin>>s;

    foreq(i,0,t-1){
        foreq(j,0,n-2){
            if(s[j] == 'B' && s[j+1] == 'G'){
                swap(s[j],s[j+1]);
                j++;
            }
        }
        if(s[n-2] == 'B' && s[n-1] == 'G') swap(s[n-2],s[n-1]);
    }
    print(s);

    return 0;
}