#include <bits/stdc++.h>
using namespace std;

int p[2000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int answer = 1;

    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
        if(p[i] > 0)
            p[i]--;
    }

    for(int i = 0; i < n; i++)
    {
        int temp = p[i];
        int depth = 1;
        while(temp != -1)
        {
            depth++;
            temp = p[temp];
        }
        answer = max(answer, depth);
    }
    cout << answer;
    return 0;
}


