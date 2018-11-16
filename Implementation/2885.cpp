#include<iostream>
#include<cstring>
#include<set>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    int len = str.size();
    std::string s;
    std::set<std::string> st;
    for(int i=1;i<len;i++)
    {
        if(str[i] == ' ')    continue;
        else if(str[i] == ',' || str[i] == '}')
        {
            if(s != "") st.insert(s);
            s = "";
        }
        else
            s = s + str[i];
    }
    printf("%d\n", st.size());
}
