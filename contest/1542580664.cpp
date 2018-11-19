#include <bits/stdc++.h>
using namespace std;

int main()
{
    //while(1) {

    char str[86400];
    memset(str, 0, sizeof(str));
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    int H, M, S, T1, T2;
    H = h*3600;
    if(H==43200) H = 0;
    H += ((60*m)+s);
    str[H] = '1';
    str[H+43200] = '1';

    M = m*720;
    M += (12*s);
    str[M] = '1';
    str[M+43200] = '1';

    S = s*720;
    str[S] = '1';
    str[S+43200] = '1';

    T1 = t1*3600;
    if(T1==43200) T1 = 0;
    str[T1] = '2';
    str[T1+43200] = '2';

    T2 = t2*3600;
    if(T2==43200) T2 = 0;
    str[T2] = '2';
    str[T2+43200] = '2';

    int flag = 0;
    for(int i=T1+1; i<86400; i++) {
        if(str[i]=='2') {
            flag = 1;
            break;
        }
        else if(str[i]=='1') {
            break;
        }
    }
    if(flag==0) {
        for(int i=T2+1; i<86400; i++) {
            if(str[i]=='2') {
                flag = 1;
                break;
            }
            else if(str[i]=='1') {
                break;
            }
        }
    }

    /*printf("H1 = %d, H2 = %d, M1 = %d, M2 = %d, S1 = %d, S2 = %d\n",
           H, H+43200, M, M+43200, S, S+43200);
    printf("T1a = %d, T1b = %d, T2a = %d, T2b = %d\n", T1, T1+43200,
           T2, T2+43200);*/

    if(flag) printf("YES\n");
    else printf("NO\n");

    //}

    return 0;
}
