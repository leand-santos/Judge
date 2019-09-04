#include <iostream>
#include <vector>

using namespace std;

bool visitado[8][8];

int peaoX, peaoY, cavaloX, cavaloY;

int main()
{
    
    for (int i = 0; i<8;i++)
        for (int j = 0; j<8;j++)
            visitado[i][j] = false;
    
    return 0;
}