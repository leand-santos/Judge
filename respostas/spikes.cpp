#include<bits/stdc++.h>

using namespace std;

char labirinto[50][50];
int n, m, j;
bool sucesso = false;
bool visitado[40][40];

bool ehValido(int l, int c)
{
	return (l >= 0) && (l < n) && (c >= 0) && (c < n);
}

void backtracking(int l, int c, int espinhosEvitados)
{
	if (labirinto[l][c] == '@') //problema solucionado
	{
		sucesso = true;
		return;
	}
	if (labirinto[l][c] == 's') //passando por um espinho
	{
		espinhosEvitados++;
		if (espinhosEvitados*2 > j) //caminho impossível (espinhosEvitados*2 por que temos que ir e voltar)
			return;
	}
	//tentando ir para posições (válidas) não visitadas e que não sejam paredes
	if (!sucesso && ehValido(l-1,c) && !visitado[l-1][c] && labirinto[l-1][c] != '#')
	{
		visitado[l-1][c] = true;
		backtracking(l-1, c, espinhosEvitados);
		visitado[l-1][c] = false;
	}
	if (!sucesso && ehValido(l,c+1) && !visitado[l][c+1] && labirinto[l][c+1] != '#')
	{
		visitado[l][c+1] = true;
		backtracking(l, c+1, espinhosEvitados);
		visitado[l][c+1] = false;
	}
	if (!sucesso && ehValido(l+1,c) && !visitado[l+1][c] && labirinto[l+1][c] != '#')
	{
		visitado[l+1][c] = true;
		backtracking(l+1, c, espinhosEvitados);
		visitado[l+1][c] = false;
	}
	if (!sucesso && ehValido(l,c-1) && !visitado[l][c-1] && labirinto[l][c-1] != '#')
	{
		visitado[l][c-1] = true;
		backtracking(l, c-1, espinhosEvitados);
		visitado[l][c-1] = false;
	}
}

int main()
{
	bool teste = false;
	int l, c;
	cin >> n >> m >> j;
	for(l = 0; l < n; l++)
		scanf("%s", labirinto[l]);
	for(l = 0; l < n; l++)
		for(c = 0; c < m; c++)
			visitado[l][c] = false;
	for(l = 0; l < n; l++)
	{
		for(c = 0; c < m; c++)
			if (labirinto[l][c] == 'x')
			{
				teste = true;
				break;
			}
		if (teste)
			break;
	}
	backtracking(l, c, 0);
	if (sucesso)
		cout << "SUCCESS" << endl;
	else
		cout << "IMPOSSIBLE" << endl;
}
