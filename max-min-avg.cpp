#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, n1, m1;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    cin >> n1 >> m1;
    int b[n1][m1];

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> b[i][j];
        }
    }

    if (m != n1)
    {
        cout << "Multiplication of the matrices is not possible";
    }
    else
    {
        int c[n][m1];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                c[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                for (int k = 0; k < n1; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m1; j++)
            {
                cout << c[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
