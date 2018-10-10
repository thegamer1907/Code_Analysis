#include <bits/stdc++.h>
#define ll      long long int
#define PI      acos(-1)
#define read    freopen("in.txt","r",stdin)
#define uu      first
#define vv      second
#define write   freopen("out.txt","w",stdout)
#define pii     pair<int,int>
#define INF     1e9
#define EPS		1e-8
#define MAX		1000006
#define MOD		1000000007
using namespace std;
string str , pat;
int lps[MAX];

void pre() {

    int j =0 , i = 1;
    while( i < str.size() ) {

        if( str[j] == str[i] ) {
            j++;
            lps[i] = j;
            i++;
        }
        else {

            if( j == 0) {
                lps[i] = 0;
                i++;
            }
            else j = lps[j-1];
        }
    }
}

bool kmp() {

    int i =0 , j = 0;
    while( i < str.size() ) {

        if( str[i] == pat[j] ) {

            i++;
            j++;
            if( j == pat.size() ) return true;
        }

        else {

            if( j == 0) i++;
            else {
                j = lps[j-1];
            }
        }
    }
    return false;
}

int main()
{
    cin>>str;
    pre();
    int ans = lps[str.size() - 1];
    for( int i =0 ; i < str.size() ; i++ )
    while( true) {
        if( ans == 0) {
            cout<<"Just a legend"<<endl;
            return 0;
        }

        for( int  i = 0 ; i < str.size() -1 ; i++ ) {

            if( lps[i] == ans ) {

                cout<<str.substr( 0, ans)<<endl;
                return 0;
            }
        }

        ans = lps[ans-1];
    }
    return 0;
}