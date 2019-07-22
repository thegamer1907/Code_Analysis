#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int N,M,K;
    cin >> N >> M >> K;
    vector<unsigned long long int> A(M,0);
    for(int i = 0; i < M; ++i)
        cin >> A[i];
        
    sort(A.begin(),A.end());
    unsigned long long int Till = K, Move = 0;
    unsigned long long int i = 0,j = 0;
    unsigned long long int Ans = 1;
    while(j < M)
    {
        A[j] -= Move;
        if(A[j] > Till)
        {
            if(i < j)
            {
                A[j] += Move;
                Move += j - i;
                i = j;
                ++Ans;
            }
            else if(i == j)
            {
                if(A[j] % K != 0)
                    Till = K * (A[j] / K + 1);
                else
                    Till = K * (A[j] / K);
                A[j] += Move;
            }
        }
        else
            ++j;
    }
    cout << Ans;
    return 0;
}