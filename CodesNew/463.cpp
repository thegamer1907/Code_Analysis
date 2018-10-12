#include <iostream>

using namespace std;

int main()
{
    int qtdLivros, t, a[100005], ma=0, l=0, cnt=0;
    cin >> qtdLivros >> t;
    for(int i = 0; i < qtdLivros; i++){
        cin >> a[i];
        while(t<a[i]) t+=a[l], l++, cnt--;
        t-=a[i], cnt++;
        if(cnt>ma) ma=cnt;
    }
    cout << ma << endl;
    return 0;
}
