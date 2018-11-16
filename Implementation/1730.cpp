#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007
#define lli long long int
#define all(C) C.begin(), C.end()
#define pb push_back

int main() {
    string n;
    cin >> n;
    
    int p=n[0],cl=1,d=0;
    
    for(int i=1;!d and i<n.size();++i){
        if (n[i] == p)
            cl += 1;
        else{
            p = n[i];
            cl = 1;
        }
        
        if (cl >= 7)
            d=1;
    }
    
    if (d)
        cout << "YES";
    else
        cout << "NO";
	return 0;
}