#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
using ll = long long;

int main(){
    fastio;
    int numero_filas, numero_columnas, numero_consultas;
    cin >> numero_filas >> numero_columnas >> numero_consultas;
    vector<vector<int>> matriz(numero_filas, vector<int>(numero_columnas));
    for (int i = 0; i < numero_filas; i++) {
        for (int j = 0; j < numero_columnas; j++) {
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < numero_consultas; i++) {
        int tipo_consulta;
        cin >> tipo_consulta;
        if (tipo_consulta == 1) {
            int fila_dada;
            cin >> fila_dada;
            int fila_real = fila_dada - 1;
            for (int i = 0; i < numero_columnas / 2; i++) {
                int columna_opuesta = numero_columnas - 1 - i;
                int valor_temporal = matriz[fila_real][i];
                matriz[fila_real][i] = matriz[fila_real][columna_opuesta];
                matriz[fila_real][columna_opuesta] = valor_temporal;
            }
        }
        else if (tipo_consulta == 2) {
            int columna_dada;
            cin >> columna_dada;
            int columna_real = columna_dada - 1;
            for (int i = 0; i < numero_filas / 2; i++) {
                int fila_opuesta = numero_filas - 1 - i;
                int valor_temporal = matriz[i][columna_real];
                matriz[i][columna_real] = matriz[fila_opuesta][columna_real];
                matriz[fila_opuesta][columna_real] = valor_temporal;
            }
        }
        else if (tipo_consulta == 3) {
            int fila_consulta, columna_consulta;
            cin >> fila_consulta >> columna_consulta;
            cout << matriz[fila_consulta - 1][columna_consulta - 1] << endl;
        }
    }
    return 0;
}