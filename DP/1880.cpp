#include <iostream>
#include <string>

int main ()
{
    std::string data;
    std::cin >> data;

    std::size_t ab = data.find("AB");
    if (ab != std::string::npos)
    {
        std::string subData1 (data.begin(), data.begin()+ab);
        std::string subData2 (data.begin()+ab+2, data.end());

        std::size_t ba1 = subData1.find("BA");
        std::size_t ba2 = subData2.find("BA");
        if ((ba1 != std::string::npos) || (ba2 != std::string::npos))
        {
            std::cout << "YES";
            return 0;
        }
    }


    ab = data.find("BA");

    if (ab != std::string::npos)
    {
        std::string subData1 (data.begin(), data.begin()+ab);
        std::string subData2 (data.begin()+ab+2, data.end());

        std::size_t ba1 = subData1.find("AB");
        std::size_t ba2 = subData2.find("AB");
        if ((ba1 != std::string::npos) || (ba2 != std::string::npos))
        {
            std::cout << "YES";
            return 0;
        }
    }

    std::cout << "NO";

    return 0;

}
