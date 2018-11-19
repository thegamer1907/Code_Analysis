#include <cstdio>
using namespace std;

int main(int argc, char const *argv[]) {
	int n;
	char c1, c2, s[3];
	scanf("%s %d", s, &n);
	c1 = s[0], c2 = s[1];
	bool ok1 = false, ok2 = false;
	for(int i=0; i<n; ++i) {
		scanf("%s", s);
		if(s[0]==c1 && s[1]==c2) ok1 = ok2 = true;
		if(s[1] == c1) ok1 = true;
		if(s[0] == c2) ok2 = true;
	}
	if(ok1 && ok2) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}