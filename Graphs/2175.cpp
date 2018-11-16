#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int answer = 0;
    while(n < m)
    {
        if(m % 2)
            m++;
        else
            m /= 2;
        answer++;
    }
    answer += n - m;
    cout << answer;
}
