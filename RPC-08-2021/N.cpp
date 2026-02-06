#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;
    int cantidadProfesores;
    cin >> cantidadProfesores;
    vector<int> conteoTotalNotas(6, 0);  // Total de A..F en toda la universidad
    while (cantidadProfesores--) {
        int cantidadEstudiantes;
        cin >> cantidadEstudiantes;
        vector<int> conteoNotasProfesor(6, 0); // Conteo A..F por profesor
        for (int i = 0; i < cantidadEstudiantes; i++) {
            char nota;
            cin >> nota;

            int indiceNota = nota - 'A'; // A=0, B=1, ..., F=5
            conteoNotasProfesor[indiceNota]++;
            conteoTotalNotas[indiceNota]++;
        }
        cout << "A:" << conteoNotasProfesor[0]
             << " B:" << conteoNotasProfesor[1]
             << " C:" << conteoNotasProfesor[2]
             << " D:" << conteoNotasProfesor[3]
             << " E:" << conteoNotasProfesor[4]
             << " F:" << conteoNotasProfesor[5] << '\n';
    }
    cout << "TOTAL:"
         << " A:" << conteoTotalNotas[0]
         << " B:" << conteoTotalNotas[1]
         << " C:" << conteoTotalNotas[2]
         << " D:" << conteoTotalNotas[3]
         << " E:" << conteoTotalNotas[4]
         << " F:" << conteoTotalNotas[5] << '\n';

    return 0;
}