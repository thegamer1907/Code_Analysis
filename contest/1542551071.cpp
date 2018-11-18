#include <iostream>
#include <string>
#include <vector>

int main()
{
bool ret=false;
std::string s;
std::cin>>s;
int n;
std::cin>>n;
std::vector<std::string> v(n);
for (int i=0;i<n;i++)
    {
    std::cin>>v[i];
    }
int cnt=0;
int cn=0;
for (auto el:v)
    {
    if (el[0]==s[1]) cnt++;
    if (el[1]==s[0]) cn++;
    if (el==s) {ret=true;break;}
    }
if ((cn>=1)&&(cnt>=1)) ret=true;

if (ret==false) std::cout<<"NO"<<std::endl;
else std::cout<<"YES"<<std::endl;
}
