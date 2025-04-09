#include <iostream>
using namespace std;
int main() {
    int inter_goals, gremio_goals;
    int grenais = 0;
    int inter_wins = 0;
    int gremio_wins = 0;
    int draws = 0;
    int continue_grenal = 1;

    cout<<"score_validation"<<endl;
    while (continue_grenal == 1) {
        cin >> inter_goals >> gremio_goals;
        grenais++;

        if (inter_goals > gremio_goals) {
            inter_wins++;
        } else if (gremio_goals > inter_goals) {
            gremio_wins++;
        } else {
            draws++;
        }

        cout << "Novo grenal (1 - sim 2 - nao)" << endl;
        cin >> continue_grenal;
    }

    cout << grenais << " grenais" << endl;
    cout << "Inter: " << inter_wins << endl;
    cout << "Gremio: " << gremio_wins << endl;
    cout << "Empates: " << draws << endl;

    if (inter_wins > gremio_wins) {
        cout << "Inter venceu mais" << endl;
    } else if (gremio_wins > inter_wins) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}