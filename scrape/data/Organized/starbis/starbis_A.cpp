#include <bits/stdc++.h>
#define Max 100001
using namespace std;
//FILE *fi=freopen("1.txt","r",stdin);
long long n,m,k;
int dem=1;
long long a[Max];
void nhap()
{
    scanf("%lld%lld%lld",&n,&m,&k);
    for(int i=1;i<=m;i++)
    {
        scanf("%lld",&a[i]);
    }
}
void xuly()
{
    // nếu vt ai đang xét bé hơn r thì tiếp tục xét đến khi nào không xét dc nửa lúc đấy cập nhật lại các thằng đã xóa, cập nhật lại vị trí ai
    // nếu ai sau khi câp nhật lại vẫn lớn hơn r thì t tiến hành tìm đoạn để xét
    // sau khi tìm đoạn để xét thì xét hết tất cả như đoạn 1
    long long time=0;// biến đếm số lân đã xóa rồi
    long long ktime=0;// biến đếm số xóa tạm thời đang xét đê cập nhật lại
    long long r=k*((a[1]/k)+int(a[1]%k!=0));;// là phần tử cuối cùng của trang àm chúng ta đang chú ý
    int i=1;
    while(i<=m)// đang xét em thứ i
    {
        if(a[i]-time<=r)
        {
            ktime++;
            i++;
        }
        else
        {
            time=ktime;
            dem++;
            if(a[i]-time>r)
            {
                long long h=a[i]-time;
                r=k*((h/k)+int(h%k!=0));
            }
        }
    }
    cout<<dem;
}
int main()
{
    nhap();
    xuly();
    return 0;
}