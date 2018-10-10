#include <bits/stdc++.h>

using namespace std;

int prefix[1000050];

void deepika(string str)
{
    int i , j , k ,l = str.length();
    memset(prefix,0,sizeof(prefix));
    j = 0;
    for(i = 1 ; i < l ; i++)
    {
        while(j != 0 && str[i] != str[j])
        {
            j = prefix[j-1];
        }
        if(str[i] == str[j])
        {
            j++;
            prefix[i] = j;
        }
        else
        {
            prefix[i] = 0;
        }
    }

}

int main()
{
    string str;
    cin >> str;
    deepika(str);
    int i , j , k , l;
    l = str.length();
    k = prefix[l-1];
    if(k == 0)
    {
        printf("Just a legend\n");
        return 0;
    }
    string text , pattern;
    k = 0;

    for(i = 0 ; i+1 < l ; i++)
    {
        if(prefix[i] == prefix[l-1])
        {
            k = prefix[l-1];
        }
    }
    if(k)
    {
        for(i = 0; i < k ; i++)
        {
            text.push_back(str[i]);
        }
        cout << text <<"\n";
        return 0;
    }

    if(prefix[prefix[l-1]-1] == 0)
    {
        printf("Just a legend\n");
        return 0;
    }
    k = prefix[prefix[l-1]-1];
    for(i =0 ; i < k ; i++)
    {
        text.push_back(str[i]);
    }
    cout << text <<"\n";
    return 0;
}
