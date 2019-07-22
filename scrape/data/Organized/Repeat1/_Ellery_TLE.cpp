#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define mp make_pair
const int maxn = 4e5+5;
const int MOD = 1e9+7;
#define mod(x) x % MOD
#define INF 0x3f3f3f3f

int n, k;
int a[maxn];
int b[maxn];

int check(int l, int r){
    //cout<<"ha"<<endl;
    for(int i = 1;i < l;i++){
        b[i] = a[i];
    }
    for(int kind = 0;kind <= 1;kind++){
        for(int i = l;i <= r;i++){
            b[i] = kind;
        }
        for(int i = r + 1;i <= n;i++){
            b[i] = a[i];
        }
        bool f = 0;
        for(int i = 1;i < n;i++){
            if(b[i] != b[i + 1]){
                f = 1;
               // cout<<k<<" "<<a[i]<<endl;
                break;
            }
        }
        if(f == 0){
            // for(int i = 1;i <= n;i++){
            //     cout<<b[i];
            // }
            // cout<<endl;
            return 0;
        }

    }
    return 1;
}
int check2(int l, int r){
    int flag = 0;
    for(int i = 1;i < l;i++){
        b[i] = a[i];
    }
    for(int kind = 0;kind <= 1;kind++){
        
        for(int i = l;i <= r;i++){
            b[i] = kind;
        }
        for(int i = r + 1;i <= n;i++){
            b[i] = a[i];
        }
        int f = 0;
        int len = 0;
        int pos1 = 0, pos2 = 0;
        for(int i = 1;i < n;i++){
            int j = i;
            len = 1;
            if(b[i] != b[i+1]){
                f++;
                //i++;
                if(f == 1){
                    pos1 = j + 1;
                }
                else if(f == 2){
                    pos2 = j + 1;
                }
            } 
            if(f > 2) break;
            //cout<<i<<endl;
        }
        // cout<<"f: "<<f<<" k: "<<k<<" len: "<<len<<endl;
        // for(int i = 1;i <= n;i++){
        //     cout<<b[i];
        // }
        // cout<<endl;
        
        if(f == 1){
            len = pos1 - 1;
            if(len <= k ||  n - len <= k){
                int QAQ = 0 ^ 0;
                //cout<<"hah"<<endl;
            }
            else{
                flag = 1;
                //cout<<"shab"<<endl;
            }
        }
        else if(f == 2){
            int len = pos2 - pos1 + 1;
            if(len <= k){
                int QAQ;
                //cout<<"ha"<<endl;
            }
            else{
                flag = 1;
                //cout<<"shaab"<<endl;
            }
        }
        else{
            flag = 1;
           // cout<<"shabi"<<endl;
        }

    }
    if(flag == 0) return 0;
    else return 1;
}
string str;
int main(){
    while(~scanf("%d %d", &n, &k)){
        cin>>str;
        for(int i = 0;i < n;i++){
            a[i + 1] = str[i] - '0';
        }
        bool flag = 0;
        for(int i = 1;i + k - 1 <= n;i++){
            
            if(check(i, i + k - 1) == 0) {
                flag = 1;
                puts("tokitsukaze");
                break;
            }
        }
        //cout<<"hah"<<endl;
        if(flag == 0){
            bool flag2 = 0;
            for(int i = 1;i + k - 1 <= n;i++){//cout<<i<<" "<<i + k-1<<endl;
                if(check2(i ,i + k - 1) == 1){
                    flag2 = 1;
                    //
                    break;
                }
            }
            if(flag2 == 1){
                puts("once again");
            }
            else{
                puts("quailty");
            }
        }


    }
    return 0;
}