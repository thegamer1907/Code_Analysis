#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define PI 3.1415926535897932384626433832
#define MOD 1000000007
#define MOD2 1000000009
#define bas 29
#define bas2 19
using namespace std;
vector<vector<int> > a;
bool sear(vector<int> how , int x , int in){
        if(in == a.size() - 1){
        bool is = true;
        for(int i = 0 ; i < a[in].size() ; i++){
            if(how[i] + a[in][i] <= (x + 1)/2)continue;
            else is = false;
        }
        if(is == true)return true;
        is = true;
        if(x != 0){
        for(int i = 0 ; i < a[in].size() ; i++){
            if(how[i] <= x / 2)continue;
            else is = false;
        }
        return is;
        }
        return false;
    }
    bool one = sear(how,x,in+1);
    for(int i = 0 ; i < a[in].size() ; i++){
        how[i] += a[in][i];
    }
    bool two = sear(how,x+1,in+1);
    return (one || two);
}
int main() {
    int n , k ;
    scanf("%d%d",&n,&k);
    for(int i = 0 ; i < n ; i++){
        vector<int> test;
        int vis = 0;
        int x;
        for(int j = 0 ; j < k ; j++){
            cin>>x;
            test.push_back(x);
        }
        bool iss = true;
        for(int j = 0 ; j < a.size() ; j++){
            bool is = true;
            for(int z = 0 ; z < k ; z++){
                if(a[j][z] != test[z]){
                    is = false;
                    break;
                }
            }
            if(is){
                iss = false;
                break;
            }
        }
        if(iss){
            a.push_back(test);
        }
    }
    vector<int> te(k,0);
    if(sear(te,0,0) == 0)printf("NO");
    else printf("YES");

}
