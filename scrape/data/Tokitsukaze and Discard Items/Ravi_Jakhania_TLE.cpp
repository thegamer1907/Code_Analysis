#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int N,M,K;
    cin >> N >> M >> K;
    vector<int> A(M,0);
    for(int i = 0; i < M; ++i)
        cin >> A[i];
        
    unsigned long long int Till = K, Move = 0;
    int i = 0,j = 0;
    int Ans = 1;
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
                while(A[j] > Till)
                    Till += K;
                A[j] += Move;
            }
        }
        else
            ++j;
    }
    if(A.empty())
        cout << "0";
    else
        cout << Ans;
    return 0;
}