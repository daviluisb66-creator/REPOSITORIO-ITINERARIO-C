#include <iostream>
using namespace std;

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int soma_principal = 0, soma_secundaria = 0;
    
    for (int i = 0; i < 3; i++) {
        soma_principal += matriz[i][i];
        soma_secundaria += matriz[i][2 - i];
    }
    
    cout << "Soma diagonal principal: " << soma_principal << endl;
    cout << "Soma diagonal secundária: " << soma_secundaria << endl;
    
    return 0;
}
