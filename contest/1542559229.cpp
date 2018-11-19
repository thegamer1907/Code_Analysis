#include <bits/stdc++.h>

using namespace std;
#define dbg(a) cout << #a << "=" << a << endl
#define println(a, ...) printf(a, ...)

int m[27];
int main(int argc, char *argv[])
{
    char c[3];

    scanf("%s", c);
    c[0] -= 'a';
    c[1] -= 'a';
    int n;
    scanf("%d", &n);

    vector<char> v;
    
    for(int i = 0; i < n; ++i) {
	char k[3];
	scanf("%s", k);
	k[0] -= 'a';
	k[1] -= 'a';
	
	if(k[0] == c[0] && k[1] == c[1]) {
	    printf("YES\n");
	    return 0;
	}
	
	v.push_back(k[1]);
	++m[k[0]];
    }

    for(auto it : v) {
	if(it == c[0] && m[c[1]] > 0) {
	    printf("YES\n");
	    return 0;
	}
    }

    printf("NO\n");
    return 0;
}
