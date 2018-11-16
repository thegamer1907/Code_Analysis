#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    scanf("%d", &n);
    int sumx=0,sumy=0,sumz=0;
    while(n--)
    {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        sumx+= a;
        sumy+= b;
        sumz+= c;
    }
    if(sumx==0 && sumy==0 && sumz==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
	return 0;
}