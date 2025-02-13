# Grupi7
# Sistemi i Menaxhimit të Bibliotekës

## Përmbledhje
Ky është një sistem i thjeshtë i menaxhimit të bibliotekës i implementuar në C++. Ai lejon përdoruesit të:
- Shtojnë libra në bibliotekë.
- Shikojnë listën e librave të disponueshëm.
- Kërkojnë një libër dhe të ndryshojnë statusin e tij.
- Kthejnë një libër të marrë.
- Fshijnë një libër nga biblioteka.
- Menaxhojnë disponueshmërinë e librave.

## Karakteristikat
- Ruajtja e një koleksioni librash me detaje si titulli, autori dhe statusi i disponueshmërisë.
- Kërkimi i librave dhe shënimi i tyre si të marrë ose të kthyer.
- Parandalimi i shtimit të librave të dyfishtë.
- Shfaqja e të gjithë librave në bibliotekë.

## Instalimi dhe Ekzekutimi Lokalisht

### Kërkesat
- Një kompilator C++ (p.sh., g++, clang++)

### Hapat
1. Klononi depotinë:
   ```sh
   git clone <repository-url>
   cd <repository-folder>
   ```
2. Kompiloni kodin:
   ```sh
   g++ -o library_management main.cpp
   ```
3. Ekzekutoni programin:
   ```sh
   ./library_management
   ```

## Përdorimi
1. Programi nis me një listë librash të paracaktuar.
2. Përdoruesit mund të ndërveprojnë me menynë duke zgjedhur opsionet për menaxhimin e librave.
3. Shtypja e `6` do të mbyllë programin.

## Udhëzime për Kontribut
1. Bëni një fork të depotisë.
2. Krijoni një degë të re për ndryshimet tuaja:
   ```sh
   git checkout -b dega-e-funksionit
   ```
3. Bëni commit për ndryshimet:
   ```sh
   git commit -m "Shtuar një funksion të ri"
   ```
4. Shtyni degën:
   ```sh
   git push origin dega-e-funksionit
   ```
5. Hapni një Pull Request.

## Licenca
Ky projekt është me burim të hapur dhe është i disponueshëm nën Licencën MIT.

