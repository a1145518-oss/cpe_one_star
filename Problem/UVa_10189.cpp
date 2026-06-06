#include <iostream>
#include <vector>
using namespace std;

int main()
{  
    int Case = 1;
    int n, m;
    while (cin >> n >> m, n > 0 && m > 0)
    {
        if (Case > 1)
            cout << endl;

        vector<vector<char> > field(n + 2, vector<char>(m + 2, '.'));
        for (int i = 1; i  <= n; ++i)
            for (int j = 1; j <= m; ++j)
                cin >> field[i][j];

        cout << "Field #" << Case++ << ":" << endl;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= m; ++j)
            {
                if (field[i][j] == '*')
                    cout << '*';
                else
                {
                    int mines = 0;
                    for (int r = i - 1; r <= i + 1; ++r)
                        for (int c = j - 1; c <= j + 1; ++c)
                            if (field[r][c] == '*')
                                ++mines;
                    cout << mines;
                }
            }
            cout << endl;
        }
    }
    return 0;
}