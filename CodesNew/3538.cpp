#include<iostream>

using namespace std;

int main() {
    int n,m,min_people,max_people;
    cin>>n>>m;
    int a[n];
    min_people = __INT_MAX__;
    max_people = 0;
    for(int i =0; i<n; i++) {
        cin>>a[i];
        min_people = min(min_people, a[i]);
        max_people = max(max_people, a[i]);
    }
    int k_max = max_people + m;
    int level_req = 0;
    for(int i =0 ; i< n; i++) {
        if(a[i] < max_people) {
            level_req += (max_people - a[i]);
        }
    }
    int k_min;
    if(level_req == 0) {
        k_min = min_people + (m/n) + ((m%n !=0) ? 1: 0);
    } else {
        if(level_req > m) {
            k_min= max_people;
        } else {
            k_min = max_people + ((m - level_req)/n) + (((m-level_req)%n !=0) ? 1: 0);
        }
    }

    cout<<k_min<<" "<<k_max;
    return 0;
}