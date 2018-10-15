#include <bits/stdc++.h>
using namespace std;

int A[102];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);
    
    int N, M;
    cin >> N >> M;
    
    for(int i=1; i<=N; i++)
        cin >> A[i];
    
    int maxx = *max_element(A+1, A+1+N) + M, minn;
    
    while(M--)
    {
        int indx = -1, minVal = *min_element(A+1, A+1+N);
        
        for(int j=1; j<=N; j++)
            if(A[j] == minVal)
                indx = j;

        A[indx]++;
    }
    
    minn = *max_element(A+1, A+1+N);
    
    cout << minn << " " << maxx << "\n";
    return 0;
}
