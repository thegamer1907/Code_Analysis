#include <stdio.h>
#include <cstring>
#include <iostream>

using namespace std;

string str;
int k, n, arr[52], ans;

int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; i++){
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i <= n; i++){
        if (arr[i] >= arr[k] && arr[i] != 0){
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}