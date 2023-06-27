//         1 
//       2 1 2 
//     3 2 1 2 3 
//   4 3 2 1 2 3 4 
// 5 4 3 2 1 2 3 4 5 

#include <iostream>
using namespace std;

int main()
{
    // butterfly
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (i == n || j <= i || j >= 2 * n - i + 1)
            {
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            if (i == 1 || j <= n - i + 1 || j >= n + i)
            {
                cout << "* ";
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}