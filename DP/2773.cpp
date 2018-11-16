#include<iostream>

bool contin(char str[])
{
    for(int i=0;str[i];i++)
        if(str[i] != '0')
            return true;
    return false;
}
int main()
{
    char str[8];
    scanf("%s", str);
    int ans[100], idx = 0;
    while(contin(str))
    {
        int val = 0;
        for(int i=0;str[i];i++)
        {
            val *= 10;
            if(str[i] != '0')
                val++,  str[i] --;
        }
        ans[++idx] = val;
    }
    printf("%d\n", idx);
    for(int i=1;i<=idx;i++)
        printf("%d%c", ans[i], idx == i ? '\n' : ' ');
}
