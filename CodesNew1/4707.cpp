#include <bits/stdc++.h>

using namespace std;

const int N = 5e5 + 5;
int n , arr[N];
bool vis[N];

int main()
{
    //freopen ("myfile.txt","w",stdout);
    scanf("%d" , &n);
    for(int i = 0;i < n;i++)
        scanf("%d" , &arr[i]);

    sort(arr , arr + n);

    int mid = n / 2;
    int cnt = n;

    for(int i = 0;i < n / 2;i++){
        for(;;){
            if(arr[i] * 2 <= arr[mid]){
                cnt--;
                mid++;
                break;
            }
            else mid++;
            if(mid == n)
                break;
        }
        if(mid == n) break;
    }

    cout << cnt << endl;

    return 0;
}
