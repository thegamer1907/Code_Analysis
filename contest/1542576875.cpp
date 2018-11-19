//
// Author: Harsh_Vasoya, DA-IICT
//

#include <bits/stdc++.h>

#define sync_off std::ios_base::sync_with_stdio(false); cin.tie(NULL);
#define lli long long int
#define Hashmap unordered_map
#define Hashset unordered_set

#define all(v) v.begin(),v.end()
#define pb push_back

#define pii pair<int,int>
#define mp make_pair
#define F first
#define S second

#define si(n)     scanf("%d",&n)
#define sii(n, m) scanf("%d%d",&n,&m)
#define slli(n)  scanf("%lld",&n)
#define forn(i, a, b) for(int i=a;i<b;i++)

const int mod = 10000009;
const lli MOD = 1000000007;
const int INF = INT_MAX;
int DEBUG = 0;

using namespace std;

int main()
{
    int n,k;
    sii(n,k);

    Hashmap<string,bool> prob;
    vector<string> v;

    string arr[5][16];
    arr[1][0] = "0" ;
    arr[1][1] = "1" ;

    arr[2][0] = "00" ;
    arr[2][1] = "01" ;
    arr[2][2] = "10" ;
    arr[2][3] = "11" ;

    arr[3][0] = "000" ;
    arr[3][1] = "001" ;
    arr[3][2] = "010" ;
    arr[3][3] = "011" ;
    arr[3][4] = "100" ;
    arr[3][5] = "101" ;
    arr[3][6] = "110" ;
    arr[3][7] = "111" ;

    arr[4][0] = "0000" ;
    arr[4][1] = "0001" ;
    arr[4][2] = "0010" ;
    arr[4][3] = "0011" ;
    arr[4][4] = "0100" ;
    arr[4][5] = "0101" ;
    arr[4][6] = "0110" ;
    arr[4][7] = "0111" ;
    arr[4][8] = "1000" ;
    arr[4][9] = "1001" ;
    arr[4][10] = "1010" ;
    arr[4][11] = "1011" ;
    arr[4][12] = "1100" ;
    arr[4][13] = "1101" ;
    arr[4][14] = "1110" ;
    arr[4][15] = "1111" ;

    forn(i,0,n){
        string s="";
        forn(j,0,k){
            int x;
            si(x);
            char c = x+48;
            s += c;
        }
        prob[s]=true;
        v.push_back(s);
    }

    string zero(k,'0');
    if (prob[zero]){
        printf("YES");
        return 0;
    }

    for(int i=0;i<n;i++){
        string s = v[i];
        forn(j,0,k){
            s[j] = (s[j]-'0'+1)%2 + '0';
        }
        if (prob[s]){
            printf("YES");
            return 0;
        }

        for(int i=0;i<pow(2,k);i++){
            bool f=true;
            for(int j=0;j<k;j++)
                if(s[j]=='0' && arr[k][i][j]!='0'){
                    f=false;
                    break;
                }

            if(f && prob[arr[k][i]]){
                printf("YES");
                return 0;
            }
        }
    }

    printf("NO");


    return 0;
}


