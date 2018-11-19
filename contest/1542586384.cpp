#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 29;
typedef pair<int ,int > P;
typedef long long ll;
int A[3];
int main(void){
    int h, m, s, t1, t2;
    cin >> A[0] >> A[1] >> A[2] >> t1 >> t2;
    A[0] = A[0] * 30;
    A[1] *= 6;
    A[2] *= 6;
    t1 *= 30;
    t2 *= 30;
    if(t1 > t2) swap(t1, t2);
    sort(A, A + 3);
    int pos1 = 3;
    int pos2 = 3;
    for(int i = 0; i < 3; i ++) if(A[i] >= t1) {
        pos1 = i;
        break;
    }
    for(int i = 0; i < 3; i ++) if(A[i] >= t2) {
        pos2 = i;
        break;
    }
  //  for(int i = 0; i < 3; i ++) cout << A[i] << endl;
  //  cout << pos1 << " " << pos2 << endl;
    if(pos1 == pos2 || (pos1 == 0 && pos2 == 3)) puts("YES");
    else puts("NO");
    return 0;
}