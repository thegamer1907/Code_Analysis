#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    int no_of_elements, max_zeroes;
    scanf("%d %d", &no_of_elements, &max_zeroes);

    vector <int> A(no_of_elements + 1);
    for(int i = 1; i <= no_of_elements; i++) scanf("%d", &A[i]);

    int no_of_0s = 0;
    int change_left = 0, change_right = 0, left = 1, right = 1, max_window_size = 0;

    while(right <= no_of_elements)
    {
        if(A[right] == 0)
            no_of_0s++;

        while(no_of_0s > max_zeroes)
        {
            if(A[left] == 0)
                no_of_0s--;

            left++;
        }

        int window_size = right - (left - 1);
        if(window_size > max_window_size)
        {
            max_window_size = window_size, change_left = left, change_right = right;
        }

        right++;
    }

    for(int i = change_left; i <= change_right; i++) A[i] = 1;

    printf("%d\n", max_window_size);
    for(int i = 1; i <= no_of_elements; i++) printf("%d ", A[i]);

    return 0;
}