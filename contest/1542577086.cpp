#include <bits/stdc++.h>

static const int Size = 16;

int main() 
{
    int n, k;
    std::cin >> n >> k;
    
    std::vector<int> v(Size);
    
    for (int i = 0; i < n; i ++)
    {
        int r = 0;
        for (int j = 0; j < k; j ++)
        {
            int t;
            std::cin >> t;
            
            r <<= 1;
            r += t;
        }
        v[r] ++;
    }
    
    int g = 15;
    for (int i = 0; i <= Size; i ++)
    {
        if (v[i] > 0)
        {
            int t = g - i;
            //std::cout << i << " " << t << std::endl;
            
            for (int j = 0; j <= t; j ++)
            {
                if (v[j] > 0)
                {
                    //std::cout << j << std::endl;
                    
                    int r0 = i;
                    int r1 = j;
                    bool result = true;
                    for (int p = 0; p < k; p ++)
                    {
                        if (r0 & 1 == 1 && r1 & 1 == 1)
                        {
                            result = false;
                            continue;
                        }
                        r0 >>= 1;
                        r1 >>= 1;
                    }
                    
                    if (result)
                    {
                        std::cout << "YES" << std::endl;
                        return 0;
                    }
                }
            }
        }
        
    }
    std::cout << "NO" << std::endl;
    
    return 0;
}