#include <iostream>

using namespace std;
#define int long long
int32_t main()
{
    int n , m , k;
    cin >> n >> m >> k;
    int a[m];
    for(int i = 0 ; i< m ; i ++){
        cin >> a[i];
    }
    int l = k ,lp = 0, p = 1 , o = 0 , s = 0 , i = 0;
    while(i < m){
        if(a[i] <= l){
            lp ++;
            if(s == 0){
                o ++;
                s = 1;
            }
            i ++;
        }else{
            if(lp == 0){
                s = 0;
                l += k;
            }else {
                l += lp;
                lp = 0;
                s = 0;
            }
        }

    }
    cout << o;
    return 0;
}