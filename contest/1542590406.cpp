#include <bits/stdc++.h>

int main() 
{
    std::string s;
    std::cin >> s;
    
    int n;
    std::cin >> n;
    
    bool first = false, second = false;
    for (int i = 0; i < n; i ++)
    {
        std::string t;
        std::cin >> t;
        
        if (t == s)
        {
            std::cout << "YES" << std::endl;
            return 0;
        }
        
        if (t[1] == s[0])
            first = true;
            
        if (t[0] == s[1])
            second = true;
            
        if (first && second)
        {
            std::cout << "YES" << std::endl;
            return 0;
        }
    }
    std::cout << "NO" << std::endl;
    
    return 0;
}
