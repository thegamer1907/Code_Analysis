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
        for(int i=1;i<n;i++)
        {
            if(str[i]=='G' && str[i-1]=='B')
            {
                str[i] = 'B';
                str[i-1] = 'G';
                i++;
            }
        }
    }
    std::cout << str << std::endl;
    return 0;
}
