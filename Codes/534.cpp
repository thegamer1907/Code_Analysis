#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>

#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <iostream>

using namespace std;

bool perfect(int x) {
    int t = 0;
    while(x > 0) {
        t += x % 10;
        x /= 10;
    }
    return (10 == t) ? true : false;
}

int run()
{
    int k = 0;
    scanf("%d", &k);
    int x = 1, cnt = 0;
    while(cnt < k) {
        if(perfect(x)) {cnt ++;}
        if(cnt == k) break;
        x ++;
    }
    printf("%d\n", x);
    return 0;
}

int main(int argc, char * argv[])
{
    run();
    return 0;
}

