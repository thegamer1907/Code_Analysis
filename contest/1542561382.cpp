#include <bits/stdc++.h>
using namespace std;
int main() {
    char pass[3], sp[202];
    scanf("%s", pass);
    int n, flag = 0, j = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        char temp[3];
        scanf("%s", temp);
        sp[j] = temp[0];
        sp[j + 1] = temp[1];
        j += 2;
        if((temp[0] == pass[0] && temp[1] == pass[1]) || (temp[0] == pass[1] && temp[1] == pass[0]))
            flag =1;
    }
    int first = 0, second = 0;
    for(int i = 0; i < 2 * n; i++)
    {
        if(i % 2 == 0 && sp[i] == pass[1])
            first = 1;
        if(i % 2 != 0 && sp[i] == pass[0])
            second = 1;
    }
    if(first == 1 && second == 1)
        flag = 1;
    if(flag == 1)
        printf("YES");
    else
        printf("NO");
	return 0;
}
