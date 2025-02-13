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