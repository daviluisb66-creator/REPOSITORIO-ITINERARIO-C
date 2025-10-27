#include <iostream>
using namespace std;

int contarOcorrencias(int matriz[4][4], int numero) {
    int contador = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == numero) {
                contador++;
            }
        }
    }
    return contador;
}

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    int numero = 7;
    cout << "O número " << numero << " aparece " << contarOcorrencias(matriz, numero) << " vezes" << endl;
    return 0;
}
