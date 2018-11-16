#include <cstdio>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <time.h>

#include <algorithm>
#include <math.h>
#include <cmath>
#include <functional>
#include <cctype>

#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <string>

#define sync ios_base::sync_with_stdio(false); cin.tie(NULL)
#define FOR(i, a, b) for(int i = a; i < (int)b; i++)
#define RFOR(i, a, b) for(int i = (int)a - 1; i >= (int)b; i--)
#define INF 2000000000
#define PI 3.14159265358979323846264338327950288419716939937510582

using namespace std;

typedef long long int ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
typedef vector<bool> vb;
typedef vector<vector<int>> matrix;
typedef vector<vector<vector<int>>> cube;
typedef vector<vector<bool>> matrixb;
typedef vector<vector<int>> graph;

int isDivByEight(string s){
    int curTen = 1;
    int result = 0;
    RFOR(i, s.size(), 0){
        result += curTen * ( s[i] - '0' );
        curTen *= 10;
    }
    return (result % 8 == 0);
}

int main(){
    string s;
    cin >> s;

    // check for the easy case
    int l = 0;
    while(s[l]){
        if(s[l] == '0'){
            cout << "YES\n0\n";
            return 0;
        }
        else if(s[l] == '8'){
            cout << "YES\n8\n";
            return 0;
        }
        l++;
    }

    // now we check with two digits
    FOR(i, 0, s.size()){
        FOR(j, i + 1, s.size()){
            string sz = "";
            sz += s[i];
            sz += s[j];
            if( isDivByEight(sz) ){
                cout << "YES\n";
                cout << sz << endl;
                return 0;
            }
        }
    }

    // now we check with three digits
    FOR(i, 0, s.size()){
        FOR(j, i + 1, s.size()){
            FOR(k, j + 1, s.size()){
                string sz = "";
                sz += s[i];
                sz += s[j];
                sz += s[k];
                if( isDivByEight(sz) ){
                    cout << "YES\n";
                    cout << sz << endl;
                    return 0;
                }
            }
        }
    }

    cout << "NO\n";
    return 0;
}