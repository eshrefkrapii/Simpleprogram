
#include<iostream>
#include<iomanip>

using namespace std;


void menuKryesore();

int main() {

    menuKryesore();
    return 0;
}

void menuKryesore() {
    int zgjedhja;
    do {
        cout << "\nVegla per Menaxhimin e Notave te Studenteve(VMNS)\n";
        cout << "3. Dil\n";
        cout << "Zgjedhni: ";
        cin >> zgjedhja;

        switch (zgjedhja) {

        case 3: cout << "Mirupafshim!\n"; break;
        default: cout << "Zgjedhja nuk u gjend ne sherbimet tona. Provoni perseri.\n";
        }
    } while (zgjedhja != 3);
}


void menaxhoNotat() {
    int zgjedhja;
    do {
        cout << "\n--- Menaxho studentet dhe notat ---\n";
        cout << "1. Shto nje student te ri dhe notat e atij studenti\n";
        cout << "2. Shiko te gjithe studentet dhe notat e regjistruar deri me tani\n";
        cout << "3. Llogarit mesataren e notave te nje studenti (duke cekur emrin e studentit)\n";
        cout << "4. Gjej noten me te larte dhe me te ulet\n";
        cout << "5. Kthehu te Menu-ja kryesore\n";
        cout << "Zgjedhni: ";
        cin >> zgjedhja;
        cout << endl;

        switch (zgjedhja) {
            case 1: {
                if (numriStudenteve >= STUDENTET_MAX) {
                    cout << "Nuk mund te shtoni me studente. Limiti eshte arritur.\n";
                    break;
                }
                string emri;
                int nota, n;
                cout << "Shkruani emrin e studentit: ";
                cin >> emri;
                cout << "Shkruani numrin e notave: ";
                cin >> n;
                if (n > NOTA_MAX) {
                    cout << "Nuk mund te shtoni me shume se " << NOTA_MAX << " nota.\n";
                    break;
                }
                Studenti& studentiRi = notateStudenteve[numriStudenteve++];
                studentiRi.emri = emri;
                studentiRi.numriNotave = n;
                cout << "Shkruani notat: ";
                for (int i = 0; i < n; ++i) {
                    cin >> nota;
                    studentiRi.notat[i] = nota;
                }
                cout << "Studenti u shtua me sukses!\n";
                break;
            }
            case 2: {
                if (numriStudenteve == 0) {
                    cout << "Nuk ka studente te regjistruar.\n";
                }
                else {
                    for (int i = 0; i < numriStudenteve; ++i) {
                        cout << notateStudenteve[i].emri << ": ";
                        for (int j = 0; j < notateStudenteve[i].numriNotave; ++j) {
                            cout << notateStudenteve[i].notat[j] << " ";
                        }
                        cout << "\n";
                    }
                }
                break;
            }
            case 3: {
                string emri;
                cout << "Shkruani emrin e studentit: ";
                cin >> emri;
                bool igjetur = false;
                for (int i = 0; i < numriStudenteve; ++i) {
                    if (notateStudenteve[i].emri == emri) {
                        igjetur = true;
                        int shuma = 0;
                        for (int j = 0; j < notateStudenteve[i].numriNotave; ++j) {
                            shuma += notateStudenteve[i].notat[j];
                        }
                        double mesatarja = double(shuma) / notateStudenteve[i].numriNotave;
                        cout << "Mesatarja e notave te " << emri << " eshte: " << mesatarja << "\n";
                        break;
                    }
                }
                if (!igjetur) {
                    cout << "Studenti nuk u gjet.\n";
                }
                break;
            }
            case 4: {
                if (numriStudenteve == 0) {
                    cout << "Nuk ka studente per te vleresuar.\n";
                    break;
                }
                int meELarta = notateStudenteve[0].notat[0];
                int meEUlta = notateStudenteve[0].notat[0];

                for (int i = 0; i < numriStudenteve; ++i) {
                    for (int j = 0; j < notateStudenteve[i].numriNotave; ++j) {
                        meELarta = max(meELarta, notateStudenteve[i].notat[j]);
                        meEUlta = min(meEUlta, notateStudenteve[i].notat[j]);
                    }
                }

                cout << "Nota me e larte: " << meELarta << "\n";
                cout << "Nota me e ulet: " << meEUlta << "\n";
                break;
            }

            case 5:
                cout << "Kthyer tek Menuja kryesore...\n";
                break;

            default:
                cout << "Zgjedhje jo valide. Provoni perseri.\n";

        }
void Kalkulatori() {

    char perserit;

    do
    {

        cout << "\n--- Kalkulatori ---\n";
        int numriNotave;
        cout << "Shkruani numrin e notave qe keni: ";
        cin >> numriNotave;

        if (numriNotave <= 0) {
            cout << "Numri i notave duhet te jete me i madh se zero.\n";
            return;
        }
    }

    double shumaNotave = 0;
    int shumaECTS = 0;
    for (int i = 0; i < numriNotave; ++i) {
        double nota;
        int ects;

      do {
        cout << "Shkruani noten e " << i + 1 << ": ";
        cin >> nota;

        if (nota < 0) {
            cout << "Nuk ka note negative" << endl;
        } 
        else if (nota < 6) {
            cout << "Ju nuk keni kaluar lenden!" << endl;
        } 
        else if (nota > 10) {
            cout << "Nuk ekziston kjo note!" << endl;
        }
      }
    while (nota < 0 || nota < 6 || nota > 10);    
    }
}
