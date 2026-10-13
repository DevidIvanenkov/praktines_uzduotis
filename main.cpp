#include <iostream>

using namespace std;

int main() {
    int meniuPasirinkimas;

    //konstantos
    const double GBP_Bendras = 0.8729;
    const double GBP_Pirkti = 0.8600;
    const double GBP_Parduoti = 0.9220;

    const double USD_Bendras = 1.1793;
    const double USD_Pirkti = 1.1460;
    const double USD_Parduoti = 1.2340;

    const double INR_Bendras = 104.6918;
    const double INR_Pirkti = 101.3862;
    const double INR_Parduoti = 107.8546;

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


        //Valiutos pasirinkimas
        int valiutosPasirinkimas;
        cout << "\nPasirinkite valiuta:" << endl;
        cout << "1 - GBP (Didziosios Britanijos svaras)" << endl;
        cout << "2 - USD (JAV doleris)" << endl;
        cout << "3 - INR (Indijos rupija)" << endl;
        cout << "Pasirinkite valiuta (1-3): ";

        if (!(cin >> valiutosPasirinkimas) || valiutosPasirinkimas < 1 || valiutosPasirinkimas > 3) {
            cout << "Neteisingas valiutos pasirinkimas!" << endl;
            break;
        }

        //Sumos ivedimas
        double suma = 0;
        if (meniuPasirinkimas == 2 || meniuPasirinkimas == 3) {
            cout << "Iveskite suma: ";
            if (!(cin >> suma) || suma <= 0) {
                cout << "Neteisinga arba neteigiama suma! Suma turi buti didesne uz 0." << endl;
                break;
            }
        }


    } while (true);

    return 0;
}