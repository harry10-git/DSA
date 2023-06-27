//         1 
//       2 1 2 
//     3 2 1 2 3 
//   4 3 2 1 2 3 4 
// 5 4 3 2 1 2 3 4 5 

#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        // print spaces
        for (int sp = n - i; sp >= 1; sp--)
        {
            cout << "  ";
        }

        // eles left of 1
        int z = i;
        for (int j = 1; j <= i; j++)
        {
            cout << z << " ";
            z--;
        }

        // eles right of 1
        for (int j = 2; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}