#include<cstdio>
#include<algorithm>
using namespace std;

int vis[100];

int main(){
    int h, m, s, t1, t2, ans = 0;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    h *= 5;
    h %= 60;
    t1 *= 5;
    t1 %= 60;
    t2 *= 5;
    t2 %= 60;
    vis[h]++;
    vis[m]++;
    vis[s]++;
    if (t1 > t2) swap(t1, t2);
    for (int i = t1; i < t2; i++)
        ans += vis[i];
    if (ans == 0 || ans == 3) printf("YES\n");
    else printf("NO\n");
	return 0;
}
