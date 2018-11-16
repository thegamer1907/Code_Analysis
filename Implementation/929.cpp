#include <iostream>
#include <string>
int main()
{
    int n,t;
    std::cin >> n >> t;
    std::cin.ignore(1);
    std::string str;
    std::getline(std::cin,str);
    while(t--)
    {
        for(int i=0;i<n-1;i++)
        {
            if(str[i]=='B' && str[i+1]=='G')
            {
                str[i] = 'G';
                str[i+1] = 'B';
                i++;
            }
        }
    }
    std::cout << str << std::endl;
    return 0;
}
