#include <iostream>

using namespace std;

int main()
{
    int n, k;
    int A[500];
    cin >> n >> k;
    for(int i=1;i<=n;i++)
    {
        cin >> A[i];
    }
    int index=0;
    for(int i=1;i<=n;i++)
    {
        if(A[i]>=A[k] && A[i]>0)
            index++;
    }
    cout << index;
    return 0;
}
