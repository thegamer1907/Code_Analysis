#include <bits/stdc++.h>
using namespace std;
vector<long long> vc;
int main(){
    long long n, m, k, num, part, pn, rm, klast, temp;
    cin >> n >> m >> k;
    for(int i= 0; i<m; i++){
        cin >> num;
        if(i == 0)
            temp = num;
        vc.push_back(num);
    }
    klast = ((temp-1)/k)*k + k;
    int lo = 0, hi, mid, lr =-1;
    int len = m-1, res = 0, cnt = 0;
    //cout << lr <<" " << klast << endl;
    while(cnt < m){
        hi = len;
        lo = 0;
        int counter = 0;
       // cout << hi << " " << cnt << " " << endl;
        while(lo < hi && counter < 25){
            counter++;
            if(vc[hi] <= klast){
                lo = hi;
                break;
            }
            mid = (lo+hi)/2;
            if(vc[mid] == klast){
                lo = mid;
                break;
            }

            if(vc[mid] > klast)
                hi = mid - 1;
            else if(vc[mid] < klast)
                lo = mid;
        }
        //cout << lo << endl;
       // return 0;
        if(lo - lr > 0){
            res++;
            klast = klast + (lo-lr);
            cnt += lo - lr;
            lr = lo;
        }
        else{
            klast = klast + k;
        }
        if(klast > n)
                klast = n;
    }
    cout << res << endl;
    return 0;
}