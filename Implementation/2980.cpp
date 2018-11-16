#include<iostream>
#include<cstring>

int main()
{
    std::string s[] = {"Tetrahedron", "Cube", "Octahedron", "Dodecahedron", "Icosahedron"};
    int face[] = {4, 6, 8, 12, 20};
    int n, ans = 0;
    scanf("%d", &n);
    std::string str;
    while(n--)
    {
        std::cin>>str;
        for(int i=0;i<5;i++)
            if(str == s[i])
                ans += face[i];
    }
    printf("%d\n", ans);
}
