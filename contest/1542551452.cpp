#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;

string s, p[200];

int main() {
    int n;
    bool ok = false;
    cin >> s >> n;
    for(int i = 0; i < n; i++) {
        cin >> p[i];
        if(p[i] == s) {
            ok = 1;
            break;
        }
    }
    
    if(!ok) {
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                if(s[0] == p[i][1] && s[1] == p[j][0]) {
                    ok = 1;
                    break;
                }
    }
    
    printf("%s\n", ok ? "YES" : "NO");
    return 0;
}
												 	 	  					 		   	