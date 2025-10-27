#include <iostream>
using namespace std;

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    // Invertendo cada linha
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 / 2; j++) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[i][2 - j];
            matriz[i][2 - j] = temp;
        }
    }
    
    cout << "Matriz com linhas invertidas:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
