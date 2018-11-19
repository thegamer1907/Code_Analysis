#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x, y;
    int D = 360;

    cin >> a >> b >> c >> x >> y;

    a = (a%12)*(360/12);
    b = (b%60)*(360/60);
    c = (c%60)*(360/60);
    x = (x%12)*(360/12);
    y = (y%12)*(360/12);

    a = a*D*D + b*D + c;
    b = b*D + c;

    b *= D;
    c *= D*D;

    x *= D*D;
    y *= D*D;

    int nums[3] = {a, b, c};
    sort(nums, nums+3);
    // if(x>y)
    //     swap(x, y);
    
    //printf("%d %d %d => %d %d\n", a, b, c, x, y);
    //printf("%.2lf %.2lf %.2lf => %.2lf %.2lf\n", nums[0]/(1.0*D*D), nums[1]/(1.0*D*D), nums[2]/(1.0*D*D), x/(1.0*D*D), y/(1.0*D*D));
    if(x==a || x==b || x==c || y==a || y==b || y==c) {
        printf("NO\n");
        return 0;
    }

    int p = 2, q = 2;

    for(int i=0; i<3; i++) {
        if(nums[i] < x  && x < nums[(i+1)%3]) {
            p = i;
            break;
        }
    }

    for(int i=0; i<3; i++) {
        if(nums[i] < y  && y < nums[(i+1)%3]) {
            q = i;
            break;
        }
    }

    //printf("%d %d\n", p, q);

    printf("%s\n", p==q? "YES" : "NO");
}
