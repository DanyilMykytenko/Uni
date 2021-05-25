#include <iostream>

using namespace std;

int main()
{
    int arr[5][5][5][5][5] = {100};
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            for(int k = 0; k < 5; k++)
                for(int n = 0; n < 5; n++)
                    for(int m = 0; m < 5; m++)
                        cout << arr[i][j][k][n][m] << " ";
    return 0;
}
