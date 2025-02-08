
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

        Perserit:
        cout << "Shkruani noten e " << i + 1 << ": ";
        cin >> nota;

        if (nota < 0)
        {
            cout << "Nuk ka note negative" << endl;
            goto Perserit;
        }
        else if (nota < 6)
        {
            cout << "Ju nuk keni kaluar lenden!" << endl;
            goto Perserit;
        }
        else if (nota > 10)
        {
            cout << "Nuk ekziston kjo note!" << endl;
            goto Perserit;
        }
    }
}