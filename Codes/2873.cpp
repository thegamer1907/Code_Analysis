#include <bits/stdc++.h>

using namespace std;
/*
const int L = 100 * 1000 + 10;
const int SIZE = 2 * L + 10;

int maxLen[SIZE];
map <char, int> go[SIZE];
int suffixLink[SIZE];
bool terminal[SIZE];

int size;
int last;

int getNew(int l = 0) {
    maxLen[size] = l;
    go[size] = map <char, int> ();
    suffixLink[size] = -1;
    terminal[size] = false;
    return size++;
}

void init() {
    size = 0;
    last = getNew();
}

int getClone(int s, int l) {
    maxLen[size] = l;
    go[size] = go[s];
    suffixLink[size] = suffixLink[s];
    terminal[size] = false;
    return size++;
}

void add(char c) {
    int p = last;
    last = getNew(maxLen[p] + 1);
    while (p != -1 && go[p].find(c) == go[p].end()) {
        go[p][c] = last;
        p = suffixLink[p];
    }

    if (p == -1) {
        suffixLink[last] = 0;
    } else {
        int q = go[p][c];
        if (maxLen[p] + 1 == maxLen[q]) {
            suffixLink[last] = q;
        } else {
            int cq = getClone(q, maxLen[p] + 1);
            suffixLink[last] = suffixLink[q] = cq;
            while (p != -1 && go[p][c] == q) {
                go[p][c] = cq;
                p = suffixLink[p];
            }
        }
    }
}

int makeTerminals() {
    int p = last;
    int ans = 0;
    while (p != -1) {
        terminal[p] = true;
        ans++;
        p = suffixLink[p];
    }
    return ans;
}*/

const int MAXN = 1000100;
vector<int> p[MAXN];

vector<int> prefix_function( string &s ){
    int n = s.size();

    vector<int> p( n , 0 );

    for( int i = 1; i < n; i++ ){
        int j = p[i-1];
        while( j > 0 && s[j] != s[i] ){
            j = p[j-1];
        }
        if( s[i] == s[j] ){
            j++;
        }
        p[i] = j;
    }
    return p;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    //freopen("dat.txt", "r", stdin);

    string s; cin >> s;
    int n = s.size();

    vector<int> p = prefix_function(s);
    vector<int> last( n , 0 );

    for( int i = 0; i < n-1; i++ ){
        last[ p[i] ] = i;
    }

    for( int i = n-1; i > 0; i-- ){
        last[ p[i-1] ] = max( last[ p[i-1] ] , last[i] );
    }

    /*
    for( int i = 0; i < n; i++ ){
        cerr << last[i] << " \n"[i+1==n];
    }
    */

    int j = p[n-1];
    while( j > 0 && !last[j] ){
        j = p[j-1];
    }

    if( j ){
        cout << s.substr( 0 , j ) << '\n';
    }
    else{
        cout << "Just a legend\n";
    }
}
