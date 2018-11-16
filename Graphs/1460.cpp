#include<vector>
#include<iostream>

int main(int argc,char* argv[])
{
    int n,inp,i,d,f=0,k=1;
    std::vector<int> v,x;
    std::cin >> n >> d;
    i = n-1;
    while (i-- && std::cin >> inp) 
        v.push_back(inp);
    for (; k < n ; ) {
        x.push_back(k+v[k-1]);
        k = k + v[k-1];
    }
    for (const int& z : x)
        if (z == d) {
            std::cout << "YES";
            return 0;
        }
    std::cout << "NO";
}