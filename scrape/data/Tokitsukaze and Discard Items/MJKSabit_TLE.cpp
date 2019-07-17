#include <bits/stdc++.h>
using namespace std;
 
#define fRead  freopen("D:\\#Programming\\Codes\\in.txt","r",stdin)
#define fWrite freopen ("D:\\#Programming\\Codes\\out.txt","w",stdout)
#define FAST_READ ios_base::sync_with_stdio(0);cin.tie(0);
 
#define WATCH(a) cout << (a) << endl;
#define WATCH2(a, b) cout << (a) << " " << (b) << endl;
#define WATCH3(a, b, c) cout << (a) << " " << (b) << " " << (c) << endl;
 
#define MEM(a) memset(a, 0, sizeof(a))
#define PI acos(-1.0)
 
#define Equal(a, b) (abs(a-b)<1e-9)
 
#define SORT12(a) sort(a, a+sizeof(a)/sizeof(a[0]))
#define SORT21(a, type) sort(a, a+sizeof(a)/sizeof(a[0]), greater<type>())
 
inline char small_letter(char ch){ return (ch<97) ? ch+32: ch; }
 
 
typedef long long int li;
typedef unsigned long long lu;
 
int main()
{
    //int T, CASE=0; cin >> T; while(T--){
 
    long long n, m, k; cin >> n >> m >> k;
    int i, j;
 
    long long data[m];
 
    for(i=0; i<m; i++) cin >> data[i];
 
    int del, t, div;
    del = t = 0;
    div = (data[0]-1)/k;
 
    for(i=0; i<m; ){
        j = 0;
 
        // cout << data[i] << " " << (div+1)*k+del << endl;
 
        while(data[i]<=(div+1)*k+del){
            j++; i++;
        }
        del+=j;
        div=(data[i]-1-del)/k;
         
            t++;
    }
 
    cout << t << endl;
 
    //}
 
	return 0;
}