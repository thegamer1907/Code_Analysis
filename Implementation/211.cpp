#include<bits/stdc++.h>
using namespace std;
long long n , i , k , a , b;
vector<long long> o , verr ;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> a >> b ;
    if(a > b)
        swap(a , b);
    for(i = 1 ; i <= n ; i++)
        o.push_back(i);
    while(1 == 1){
            verr = o ;
            o.clear();
            k ++ ;
        for(i = 0 ; i < verr.size() - 1; i = i + 2){

            if(verr[i] == a && verr[i + 1] == b){
                if(verr.size() == 2){
                    cout <<"Final!";
                    return 0 ;
                }
                else {
                    cout << k ;
                    return 0 ;
                }
            }
            if(verr[i + 1] != a && verr[i + 1] != b)
                o.push_back(verr[i]);
            else o.push_back(verr[i + 1]);
        }
    }
}
