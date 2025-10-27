#include <iostream>
using namespace std;

int main() {
    int matriz[2][2];
    
    cout << "Digite os valores da matriz 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    
    cout << "Matriz digitada:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
