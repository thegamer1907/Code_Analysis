#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int c_sum(int n) {
int ans=0;
int k=n;
while(k>0) {ans+=k%10; k/=10;}
return ans;
}

int main() {
    int k;
    cin>>k;

    int t=0;
    int i=0;
    for(;t<k; i++) {
    if (c_sum(i)==10) t++;
    }

    cout<<i-1;

    return 0;
}
