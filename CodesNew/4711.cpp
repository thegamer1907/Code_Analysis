#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cin >> n;

    vector<int> A(n);
    for(int& x : A) cin >> x;

    sort(A.begin(), A.end());

    int p2 = A.size() - 1;
    int p1 = A.size() / 2 - 1;

    int count = 0;
    vector<bool> occ(n);
    while(p1 >= 0 && p2 >= 0)
    {
        while(p1 >= 0 && (A[p2] < 2*A[p1] || occ[p1])) { --p1; }
        if(p1 >= 0)
        {
            count++;
            occ[p1] = occ[p2] = true;
            while(p1 >= 0 && occ[p1]) p1--;
            while(p2 >= 0 && occ[p2]) p2--;
        }
        else break;
    }

    cout << A.size() - count << endl;
}
