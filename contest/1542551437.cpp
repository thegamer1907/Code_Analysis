#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int INF = 1e9;
int h,m,s,t1,t2;
bool hand [12 * 60 * 60];

int main()
{
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    h %= 12, t1 %= 12, t2 %= 12;
    hand[h * 3600 + m * 60 + s] = hand[720 * m + s * 12] = hand[s * 720] = true;

    t1 *= 3600, t2 *= 3600;
    bool flag = true;
    for(int i = t1 + 1; i != t2; i = (i + 1) % 43200){
        if(hand[i]){
            flag = false;
            break;
        }
    }
    if(flag)
        return !printf("YES");

    flag = true;
    for(int i = t2 + 1; i != t1; i = (i + 1) % 43200){
        if(hand[i]){
            flag = false;
            break;
        }
    }
    if(flag)
        return !printf("YES");
    return !printf("NO");
}
