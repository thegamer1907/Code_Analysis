#include <iostream>
using std::cin;
using std::cout;
int main(){
    int N, T;
    while(cin >> N >> T){
        char arr[N];
        for(int n = 0; n != N; ++n)
            cin >> arr[n];
        for(int t = 0; t != T; ++t){
            int i = 0;
            while(i <= N - 1){
                if(arr[i] == 'B' && arr[i + 1] == 'G'){
                    arr[i] = 'G';
                    arr[i + 1] = 'B';
                    i += 2;
                }
                else
                    ++i;
            }
        }
        arr[N] = '\0';
        cout << arr << std::endl;
    }
    return 0;
}
