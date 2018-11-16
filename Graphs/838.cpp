#include <iostream>
#include <string>


int main(int argc, char const *argv[])
{
    int n, t,k;
    std::string Q;

    std::cin >> n >> t >> Q;
    k = Q.length();
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if(j < k-1 && Q[j] == 'B' && Q[j+1]=='G') 
            {
                Q[j+1] = 'B';
                Q[j] = 'G';
                j++;
            }
        }
    } 

    std::cout << Q;

    return 0;
}
