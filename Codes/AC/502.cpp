#include <bits/stdc++.h>
using namespace std;
const long long limN = 1e8 ;
const int limW = 1e4 + 5;

vector<long long> nums;

void genera(long long n=0, int s=0) {
    if(s>10) return;
    if(s==10) {
        nums.push_back(n);
        // printf("%lld\n", n);
    }
    if(n >= limN) return;
    n *= 10;
    for(int i=0; i<10; i++) {
        if(n+i > 0)
            genera(n + i, s + i);
    }
}

int main() {
    genera();
    sort(nums.begin(), nums.end());
    // for(int i=0; i<(int) nums.size(); i++)
    //     printf("%d => %lld\n", i+1, nums[i]);
    // printf("%d\n", (int) nums.size());
    int n ;
    scanf("%d", &n);
    printf("%lld\n", nums[n-1]);
}
