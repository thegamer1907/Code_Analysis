
#include <iostream>

using namespace std;

int main()
{
    int n_books, free_minutes, read, j = 0, time_spent = 0;
    cin >> n_books >> free_minutes;
    int books[n_books];
    
    for (int i = 0; i < n_books; ++i)
    {
        cin >> books[i];
    }

    while (j < n_books && time_spent + books[j] <= free_minutes)
    {
        time_spent += books[j++];
    }
    
    read = j;
    
    for (int i = 0; i < n_books; ++i)
    {
        time_spent -= books[i];
        while (j < n_books && time_spent + books[j] <= free_minutes)
        {
            time_spent += books[j++];
        }
        
        if (j - i - 1 > read)
        {
            read = j - i - 1;
        }
    }
    
    cout << read << endl;
    
    return 0;
}
