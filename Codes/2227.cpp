#include<iostream>
#include<stdio.h>

int main() {
    long long N;
    long long arr[200005];
    scanf("%ld", &N);
    for (long index = 0; index < N; index++) {
        scanf("%lld", &arr[index]);
    }
    long long sum = 0;
    long long sum1 = 0;
    long long sum3 = 0;
    long pos1 = 0;
    long pos3 = N - 1;
    /*
    1 3 1 1 4
    1st iteration
    pos1 = 2, pos3 = 3, sum1 = 4, sum3 = 4 sum = 4
    
    */
    while( pos1 <= pos3) {
        if (sum1 == sum3) {
            if (pos1 == pos3)
                break;
            sum = sum1;
            sum1 += arr[pos1];
            sum3 += arr[pos3];
            pos1++;
            pos3--;
        }
        else if (sum1 > sum3) {
            sum3 += arr[pos3];
            pos3--;
        }
        else {
            sum1 += arr[pos1];
            pos1++;
        }
    }
    if (sum1 == sum3)
        sum = sum1;
    printf ("%lld", sum);
}