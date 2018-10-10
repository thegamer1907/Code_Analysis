#include<cstdio>
#include<iostream>

using namespace std;

int sum(int n)
{
        int s = 0;
        while(n)
        {
                s += n % 10;
                n /= 10;
        }
        return s;
}

int main()
{
        int k;
        cin >> k;
        for(int i = 19; i < 1e8; i++)
        {
                if(sum(i) == 10)
                {
                        k -= 1;
                        if(!k)
                        {
                                cout << i << endl;
                                break;
                        }
                }
        }
}
