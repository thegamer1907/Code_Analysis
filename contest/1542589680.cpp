#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

double nums[3];



int main()
{
    int h, m, s;
    int t1, t2;
    scanf("%i%i%i", &h, &m, &s);
    scanf("%i%i", &t1, &t2);
    double ang1 = (h % 12) * 5;
    ang1 += m / 12.0;
    ang1 += s / (12.0*60.0);
    double ang2 = m + (s / 60.0);
    double ang3 = s;
    nums[0] = ang1;
    nums[1] = ang2;
    nums[2] = ang3;
    sort(nums, nums + 3);
    t1 *= 5;
    t2 *= 5;

    int seg1 = 0;
    int seg2 = 0;
    if (nums[0] <= t1 && t1 <= nums[1])
    {
        seg1 = 1;
    }else
    if (nums[1] <= t1 && t1 <= nums[2])
    {
        seg1 = 2;
    }
    else
    {
        seg1 = 3;
    }
    if (nums[0] <= t2 && t2 <= nums[1])
    {
        seg2 = 1;
    }
    else
        if (nums[1] <= t2 && t2 <= nums[2])
        {
            seg2 = 2;
        }
        else
        {
            seg2 = 3;
        }
    if (seg1 == seg2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}