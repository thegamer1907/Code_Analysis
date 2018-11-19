#include <bits/stdc++.h>
using namespace std ;

const int N = 16 ;

int n, k ;
set < vector < int > > teams ;
vector < int > problems[17] ;

short dp[N][N][N][N][N][N]; // save memory

short solve(int i, int a, int b, int c, int d, int probs)
{
    if(i >= n)
    {
        // they want to select any non-empty subset of it as a problemset.
        if(probs == 0) return false ;

        // each of the teams should know at most half of the selected problems
        int half = probs /2  ;
        if(a <= half and b <= half and c <= half and d <= half )
            return true ;

        return false ;
    }

    short& ans = dp[i][a][b][c][d][probs] ;
    if(ans != -1) return ans ;

    ans = solve(i+1, a, b, c, d, probs);
    ans = max(ans, solve(i+1, a + problems[i][0], b + problems[i][1], c + problems[i][2], d + problems[i][3], probs + 1));
    return ans ;
}

int main()
{
    cin >> n >> k ;

    for(int i = 0; i < n; i++)
    {
        vector < int > team ;
        for(int dummy = 0; dummy < 4; dummy++)
            team.push_back(0);

        for(int j = 0; j < k; j++)
            cin >> team[j] ;

        if(teams.find(team) == teams.end())
            teams.insert(team);
    }

    n = teams.size();

    int l = 0 ;
    while(!teams.empty())
    {
        problems[l] = *teams.begin();
        teams.erase(teams.begin());
        l++;
    }


    memset(dp, -1, sizeof(dp));
    short possible = solve(0, 0, 0, 0, 0, 0);
    if(possible)
        cout << "YES" ;
    else
        cout << "NO" ;

    return 0;
}
