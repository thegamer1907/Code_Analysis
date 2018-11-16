/*
***********************
2018-10-10 Wed
***********************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

/* I'm too stupid to solve this problem */

using namespace std;
#define PI 3.14159265359
#define eps 1e-7
#define mp make_pair
#define pb push_back
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORN(i,a,b) for(int i=a;i<=b;i++)
const int INF = 1<<29;
typedef unsigned long long ull;
typedef long long ll;
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int n,m;
int A[105],B[105];

int main(){
	ios_base::sync_with_stdio(false); //Fast I/O
	cin.tie(NULL);
    cout.tie(NULL);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);	
    
    cin >> n;
    FOR(i,0,n)
        cin >> A[i];
    cin >> m;
    FOR(i,0,m)
        cin >> B[i];

    sort(A,A+n);
    sort(B,B+m);
    //set<pair<int,int>> C;
    int cc=0;

    FOR(i,0,n){
        FOR(j,0,m){
            if(abs(A[i]-B[j])<2){
                /*int x=A[i],y=B[j];
                if(x<y)
                    swap(x,y);
                C.insert(mp(x,y));*/
                cc++;
                B[j]=-1;
                break;
            }
        }
    }

    cout << cc << endl;

    return 0;
}
