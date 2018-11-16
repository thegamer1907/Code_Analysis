#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <fstream>
#include <math.h>
#include <cmath>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<deque>
#include<map>
#include <queue>
#include <set>

using namespace std;

int n, m, j = 0, ans = 0;
int a[107], b[107];

int main() {
    ios::sync_with_stdio(0);

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    for (int i = 0; i < n; i++){
        if (abs(a[i] - b[j]) <= 1 && j < m){
            ans++;
            j++;
        }else{
                while (b[j] < a[i] - 1 && j < m - 1){
                    j++;
                }
                if (abs(b[j] - a[i]) <= 1 && j < m){
                    ans++;
                    j++;
                    if (j == m){
                        cout << ans;
                        return 0;
                    }
                }
            }
        }
        cout << ans;


    return 0;
}
