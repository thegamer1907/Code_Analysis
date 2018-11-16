#include <cstdio>

using namespace std;

int main()
{
    int n, k;

    scanf ("%d %d", &n, &k);

    int solved [50 + 10];

    for ( int i = 0; i < n; i++ ) {
        scanf ("%d", &solved [i]);
    }
    int margin = solved [k - 1];

    int cnt = 0;

    for ( int i = 0; i < n; i++ ) {
        if ( solved [i] >= margin && solved [i] ) cnt++;
    }

    printf ("%d\n", cnt);

    return 0;
}
