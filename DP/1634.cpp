# include <bits/stdc++.h>

const int MaxN = 100010;

std::vector<int> a, b;

int app[MaxN];

int upper(int x)
{
    int l = 0, r = a.size();
    while(l < r)
    {
        int mid = (l + r) >> 1;
        if(a[mid] > x)
            r = mid;
        else l = mid + 1;
    }
    return l;
}

int lower(int x)
{
    int l = -1, r = a.size() - 1;
    while(l < r)
    {
        int mid = (l + r + 1) >> 1;
        if(a[mid] < x)
            l = mid;
        else
            r = mid - 1;
    }
    return l;
}
int main()
{
    std::string s;
    std::cin >> s;
    int len = s.length();
    for(int i = 0; i < len - 1; i++)
    {
        std::string tmp = s.substr(i, 2);
        if(tmp == "AB")
            a.push_back(i), app[i] = 1;
        else if(tmp == "BA")
            b.push_back(i);
    }
    if(a.size() == 0 || b.size() == 0)
        return 0 * printf("NO");
    for(int i = 0; i < b.size(); i++)
    {
        int x = lower(b[i] - 1);
        int y = upper(b[i] + 1);
        if(x != -1 || y != a.size())
            return 0 * printf("YES");
    }
    printf("NO");
    return 0;
} 