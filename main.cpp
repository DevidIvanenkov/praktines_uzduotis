#include <iostream>

using namespace std;

int main() {
    int meniuPasirinkimas;

    do {
        //Pagrindinis meniu
        cout << "\n===============================" << endl;
        cout << "       VALIUTOS KEITYKLA       " << endl;
        cout << "===============================" << endl;
        cout << "1. Valiutos kurso palyginimas su euru" << endl;
        cout << "2. Valiutos pirkimas (EUR -> valiuta)" << endl;
        cout << "3. Valiutos pardavimas (valiuta -> EUR)" << endl;
        cout << "4. Iseiti" << endl;
        cout << "Pasirinkite veiksma (1-4): ";

        if (!(cin >> meniuPasirinkimas)) {
            cout << "Klaida: ivestas ne skaicius! Bandykite dar karta." << endl;
            break;
        }

        if (meniuPasirinkimas == 4) {
            cout << "Programa baigia darba. Geros dienos!" << endl;
            break;
        }

        if (meniuPasirinkimas < 1 || meniuPasirinkimas > 4) {
            cout << "Neteisingas meniu pasirinkimas! Pasirinkite nuo 1 iki 4." << endl;
            break;
        }

    } while (true);

    return 0;
}