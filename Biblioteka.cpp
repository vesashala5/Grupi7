#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Struktura per te perfaqesuar nje liber
struct Liber {
    string titulli;
    string autori;
    bool ne_sirtar;
};
// Funksioni per te shtuar nje liber ne biblioteke
void shtoLiber(vector<Liber>& biblioteka, string titulli, string autori, bool ne_sirtar) {
    for (const auto& liber : biblioteka) {
        if (liber.titulli == titulli) {
            cout << "Ky liber tashme ekziston ne biblioteke!" << endl;
            return;
        }
    }
    biblioteka.push_back({titulli, autori, ne_sirtar});
    cout << "Libri \"" << titulli << "\" u shtua me sukses!" << endl;
}
// Funksioni per te shfaqur te gjithe librat ne biblioteke
void shfaqBiblioteken(const vector<Liber>& biblioteka) {
    if (biblioteka.empty()) {
        cout << "Biblioteka eshte bosh!" << endl;
        return;
    }
    cout << "\nLista e librave ne biblioteke:" << endl;
    for (const auto& liber : biblioteka) {
        cout << "Titulli: " << liber.titulli << ", Autori: " << liber.autori 
             << ", Statusi: " << (liber.ne_sirtar ? "Ne sirtar" : "Mungon") << endl;
    }
}

// Funksioni per te kerkuar nje liber dhe per te ndryshuar statusin e tij
void menaxhoKerkimin(vector<Liber>& biblioteka) {
    string titulli;
    cout << "\nShkruani titullin e librit qe deshironi te kerkoni: ";
    getline(cin, titulli);

    for (auto& liber : biblioteka) {
        if (liber.titulli == titulli) {
            if (liber.ne_sirtar) {
                cout << "\nLibri \"" << liber.titulli << "\" eshte ne sirtar." << endl;
                cout << "A deshironi ta merrni? (po/jo): ";
                string pergjigje;
                getline(cin, pergjigje);
                if (pergjigje == "po") {
                    liber.ne_sirtar = false;
                    cout << "\nStatusi i librit u ndryshua ne: Mungon." << endl;
                } else {
                    cout << "\nLibri mbeti ne sirtar." << endl;
                }
            } else {
                cout << "\nPer momentin nuk e kemi ate liber." << endl;
            }
            return;
        }
    }
    cout << "\nLibri nuk u gjet ne biblioteke." << endl;
}
// Funksioni per te kthyer nje liber ne sirtar
void ktheLiber(vector<Liber>& biblioteka) {
    string titulli;
    cout << "\nShkruani titullin e librit qe po ktheni: ";
    getline(cin, titulli);
    
    for (auto& liber : biblioteka) {
        if (liber.titulli == titulli) {
            if (!liber.ne_sirtar) {
                liber.ne_sirtar = true;
                cout << "\nLibri \"" << titulli << "\" u kthye ne sirtar." << endl;
            } else {
                cout << "\nKy liber eshte tashme ne sirtar!" << endl;
            }
            return;
        }
    }
    cout << "\nLibri nuk u gjet ne biblioteke." << endl;
}