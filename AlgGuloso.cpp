#include <iostream>
//Type:
//Status:

using namespace std;

int mat[1000][1000];
int n, m, soma = 0;

int ajustaNum(int num)
{
    if (num < 0)
        num = n - 1;
    else if (num > m)
        num = 0;
    return num;
}

void menorCaminhoIte()
{
    int menor = mat[0][0], k = 0;
    for (int i = 0; i < n; i++)
        if (menor > mat[i][0])
        {
            menor = mat[i][0];
            k = i;
        }
    soma += menor;
    for (int i = 1; i < m; i++)
    {
        int menor = mat[ajustaNum(k - 1)][i], j = -1;
        //cout << menor << " " << ajustaNum(k - 1) << endl;
        //printf("\nk-1=%d, k+1 = %d\n", ajustaNum(k - 1), ajustaNum(k + 1));

        if (menor > mat[k][i])
        {
            menor = mat[k][i];
            j = 0;
        }
        if (menor > mat[ajustaNum(k + 1)][i])
        {
            menor = mat[ajustaNum(k + 1)][i];
            j = 1;
        }
        k += j;
        soma += menor;
    }
    cout << soma;
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    menorCaminhoIte();
    return 0;
}