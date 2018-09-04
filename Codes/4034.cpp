#include <stdio.h>
#include <vector>
using namespace std;

vector<int> a[100005];
vector<int> maxi[100005];
int mm[100005];

int main() {
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            int t; scanf("%d", &t);
            a[i].push_back(t);
            maxi[i].push_back(0);
        }
    }
    
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            if(i==0) maxi[i][j] = 1;
            else {
                if(a[i][j] >= a[i-1][j]) maxi[i][j] = maxi[i-1][j] + 1;
                else maxi[i][j] = 1;
            }
        }
    }
    
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            if(maxi[i][j] > mm[i]) mm[i] = maxi[i][j];
    
    int q;
    scanf("%d", &q);
    while(q--) {
        int l, r;
        scanf("%d %d", &l, &r); l--; r--;
        if(r-mm[r]+1 <= l) puts("Yes");
        else puts("No");
    }
    return 0;
}