#include <bits/stdc++.h>

#define f cin
#define g cout
#define ll long long
using namespace std;

const int NMax = 500001;

int n,nr;
string x[NMax],y[NMax];

int main(){
    f >> n;
    for(int i = 1; i <= n; ++i){
        f >> x[i];

//        hashh1[i][0] = 1;
//        for(int j = 1; j < x.size(); ++j){
//            hashh1[i][j] == hashh1[i][j - 1] * prime + x[i][j] - 'a' + 1;
//        }
    }
    y[++nr] = x[n];
    for(int i = n - 1; i >= 1; --i){

        nr++;
        for(int j = 0; j < y[nr - 1].size(); ++j){
            if(j > x[i].size()){
                break;
            }
            if(x[i][j] < x[i + 1][j]){
                for(int k = j; k < x[i].size(); ++k){
                    y[nr].push_back(x[i][k]);
                }break;
            }
            if(x[i][j] == x[i + 1][j]){
                //g << x[i][j];
                y[nr].push_back(x[i][j]);
            }else{
                break;
            }
        }
    }
    for(int i = nr; i >= 1; --i){
        g << y[i] << '\n';
    }
    return 0;
}
