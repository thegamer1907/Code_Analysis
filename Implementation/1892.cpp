#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    int x=0, y=0, z=0;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        x+=a; y+=b; z+=c;
    }
    if(!x && !y && !z) printf("YES\n"); else printf("NO\n");
	
	return 0;
}