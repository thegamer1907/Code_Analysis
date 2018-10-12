#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[102];

int main() {
    cin>>n;
    cin>>m;
    int maxx = INT_MIN;
    int minn = INT_MAX;
    int max_possible,min_possible;
    bool all_equal = true;
    int first;

    for(int i=0; i<n; i++) {
        cin>>a[i];
        if(i==0) {
            first=a[i];
        } else {
            if(all_equal == true) {
                if(first != a[i]) {
                    all_equal=false;
                }
            }
        }
        maxx=max(maxx,a[i]);
    }

    /** edge case **/
    if (all_equal == true) {
        max_possible = maxx+m;
        int rem = m/n;
        for(int i=0; i<n; i++){
            a[i]+=rem;
        }
        m = m-rem*n;
        if(m>0){
            min_possible=a[0]+1;
        } else {
            min_possible=a[0];
        }
        cout<<min_possible<<" "<<max_possible<<endl;
        return 0;
    }

    sort(a,a+n);
    maxx = max(maxx, a[n-1]);
    max_possible = maxx+m;
    int i=0,rem;
    for(i=0; i<n-1; i++) {
        if(m > 0) {
            rem = (maxx - a[i]);
            a[i] = a[i] + rem;
            m = m - rem;
        } else {
            break;
        }
    }

    if(m > 0) {
        rem = m/n;
        for(int i=0;i<n;i++){
            a[i]+=rem;
        }
        m = m - (rem*n);
        if(m > 0) {
            min_possible = a[0]+1;
        } else {
            min_possible = a[0];
        }
    } else {
        min_possible = maxx;
    }
    cout<<min_possible<<" "<<max_possible<<endl;

    return 0;
}
