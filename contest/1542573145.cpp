#include <bits/stdc++.h>

using namespace std;

bool inSegment(int b, int e, int t)
{
    //printf("%d %d\n", b, e);
    if (b <= e){
        return (b < t && e > t);
    }
    else{
        return ((t <= 600 && b < t)||(t > 0 && t < e));
    }
    return false;
}

int main()
{
    int h, m, s, t1, t2;

    scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);

    h *= 50, m *= 10, s *= 10;
    if (m != 0 || s != 0) h += 1;
    if (s != 0) m += 1;

    t1 *= 50, t2 *= 50;

    int segments[3] = {h, m, s};

    sort(segments, segments + 3);

    /*for (int i = 0; i < 3; i++) printf("%d ", segments[i]);
    printf("\n");*/

    bool ans = false;
    for (int i = 0; i < 3; i++){
        if ((inSegment(segments[i], segments[(i + 1) % 3], t1)) && (inSegment(segments[i], segments[(i + 1) % 3], t2))){
            ans = true;
            //printf("%d\n", i);
            break;
        }
    }

    ans ? printf("YES\n") : printf("NO\n");
    return 0;
}
