#include<bits/stdc++.h>
#define LL long long
using namespace std;

const int maxn = 105;

string t;
string p [maxn];
int main()
{
    cin >> t;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p[i];
        if(p[i] == t){
            printf("YES");
            return 0;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < n ; j++){
            if((p[i][1] == t[0] && p[j][0] == t[1])|| (p[j][1] == t[0] && p[i][0] == t[1] )){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}
