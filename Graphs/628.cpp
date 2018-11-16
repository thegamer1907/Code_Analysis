#include <bits/stdc++.h>

using namespace std;

int main()
{
    string queue = "";
    int numChildren, time;
    scanf("%d %d", &numChildren, &time);
    cin >> queue;
    // swap(queue[2], queue[3]);
    // cout << queue << endl;
    for (int i = 0; i < time; i++){
        int j = 0;
        while (j < numChildren-1){
            if (queue[j] == 'B' && queue[j+1] == 'G'){
                swap(queue[j], queue[j+1]);
                j += 2;
            }
            else j += 1;    
        }
    }
    // printf ("%s\n", queue);
    cout << queue << endl;
    return 0;
}