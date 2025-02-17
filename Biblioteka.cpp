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
// Funksioni per te fshire nje liber
void fshiLiber(vector<Liber>& biblioteka) {
    string titulli;
    cout << "\nShkruani titullin e librit qe deshironi te fshini: ";
    getline(cin, titulli);

    for (auto it = biblioteka.begin(); it != biblioteka.end(); ++it) {
        if (it->titulli == titulli) {
            cout << "\nLibri \"" << it->titulli << "\" u fshi nga biblioteka." << endl;
            biblioteka.erase(it);
            return;
        }
    }
    cout << "\nLibri nuk u gjet ne biblioteke." << endl;
}
// Funksioni kryesor main
int main() {
    vector<Liber> biblioteka;
    
    // Shtimi i disa librave
    shtoLiber(biblioteka, "Lahuta e Malcis", "Gjergj Fishta", true);
    shtoLiber(biblioteka, "Gjenerali i ushtrise se vdekur", "Isamil Kadare", true);
    shtoLiber(biblioteka, "Hamleti", "William Shakespeare", true);
    shtoLiber(biblioteka, "Pride and Prejudice", "Jane Austen", true);
    shtoLiber(biblioteka, "Iliada & Odisea", "Homeri", true);
    shtoLiber(biblioteka, "Komedia Hyjnore", "Dante Alighieri", true);
    shtoLiber(biblioteka, "Lufta dhe Paqja", "Lev Tolstoi", true);
    
    while (true) {
        cout << "\nZgjidhni nje opsion:" << endl;
        cout << "1. Kerkoni nje liber" << endl;
        cout << "2. Shtoni nje liber" << endl;
        cout << "3. Fshini nje liber" << endl;
        cout << "4. Ktheni nje liber" << endl;
        cout << "5. Shfaqni te gjithe librat" << endl;
        cout << "6. Dilni" << endl;
        cout << "Shtyp numrin : ";
    
        string zgjedhja;
        getline(cin, zgjedhja);
        
        if (zgjedhja == "1") {
            menaxhoKerkimin(biblioteka);
        } else if (zgjedhja == "2") {
            string titulli, autori;
            cout << "\nShkruani titullin e librit: ";
            getline(cin, titulli);
            cout << "Shkruani autorin e librit: ";
            getline(cin, autori);
            shtoLiber(biblioteka, titulli, autori, true);
        } else if (zgjedhja == "3") {
            fshiLiber(biblioteka);
        } else if (zgjedhja == "4") {
            ktheLiber(biblioteka);
        } else if (zgjedhja == "5") {
            shfaqBiblioteken(biblioteka);
        } else if (zgjedhja == "6") {
            cout << "\nDuke dalur..." << endl;
            break;
        } else {
            cout << "\nOpsion i pavlefshem, provoni perseri!" << endl;
        }
    }
    return 0;
}