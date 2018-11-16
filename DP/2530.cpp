#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int cur, prev, max_len = 1, cur_len = 1;
    cin >> prev;
    for(int i = 1; i < n; i++)
    {
        cin >> cur;
        if(cur > prev)
            cur_len++;
        else
        {
            if(cur_len > max_len)
                max_len = cur_len;
            cur_len = 1;
        }
        prev = cur;
    }
    if(cur_len > max_len)
        max_len = cur_len;
    cout << max_len;
    return 0;
}
