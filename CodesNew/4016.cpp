#include <bits/stdc++.h>
using namespace std;
int n, q;
int search(long long int sum[], int left, int right, long long int key){
    if (right < left){
        return -1;
    }
    int mid = (left+right)/2;
    if (sum[mid] == key) {
        return mid+1;
    }
    if (sum[mid] > key) {
        if (mid > 0 && sum[mid-1] < key) {
            return mid;
        }
        if (mid == 0) {
            return 0;
        }
        return search(sum, left, mid-1, key);
    }
    if (mid < n-1 && sum[mid+1] > key) {
        return mid+1;
    }
    if (mid == n-1) {
        return n;
    }
    return search(sum, mid+1, right, key);
}
int main(){

    scanf("%d%d", &n, &q);
    long long int a[n], arrow = 0;
    long long int sum[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", a+i);
    }
    sum[0] = a[0];
    for (int i = 1; i < n; i++) {
        sum[i] = sum[i-1]+a[i];
    }
    int last = 0;
    int killed = 0;
    for (int i = 0; i < q; i++) {
        //last = arrow;
        scanf("%lld", &arrow);
        long long int index = arrow+((killed)?sum[killed-1]:0)+last;
        int key = search(sum, 0, n-1, index);
        if (key == n) {
            cout << n << endl;
            killed = 0;
            last = 0;
            continue;
        }
        if (key <= killed) {
            cout << n - killed << endl;
            last += arrow;
            continue;
        }
        else{
            cout << n - key << endl;
            last = arrow-(sum[key-1] - ((killed)?sum[killed-1]:0))+last;
            killed = key;
        }

    }

    return 0;
}
