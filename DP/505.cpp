#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>    

int main()
{
    int n,m;
    std::cin >> n ;
    std::vector<int> b(n);
    for(int i=0;i<n;i++)
        std::cin >> b[i];
    std::cin >> m;
    std::vector<int> g(m);
    for(int i=0;i<m;i++)
        std::cin >> g[i];
    std::sort(b.begin(),b.end());
    std::sort(g.begin(),g.end());
    int boys =0 ; 
    int girls =0;
    int count = 0;
    while(boys < n && girls < m)
    {
        if(abs(b[boys]-g[girls]) <=1)
        {
            count++;
            boys++;
            girls++;
        }
        else if(b[boys] < g[girls])
        {
            boys++;
        }
        else
        {
            girls++;
        }
    }
    std::cout << count << "\n";
}