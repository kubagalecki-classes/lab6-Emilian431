#include "make_random_vector.hpp"
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

/*bool myfunction(int i, int j)
{
    return (i > j);
}
struct myclass
{
    bool operator()(int i, int j) { return (i > j); }
} myobject;

bool isbe7(int i)
{
    return (i > 7);
}

int  a;
bool isba(int i)
{
    return (i > a);
}

class isboex
{
public:
    isboex(int isx) : x{isx} {}
    int  getNumber() { return x; }
    bool operator()(int i) { return i > x; }

private:
    int x;
};
*/

int main()
{
    // zad1
    /*vector< int > wektor;
    int           n = 10;
    wektor          = make_random_vector(n, 0, 10);
    for (const int& e : wektor) {
        cout << e << endl;
    }
    cout << "posortowane" << endl;
    sort(wektor.begin(), wektor.end());
    for (const int& e : wektor) {
        cout << e << endl;
    }
    // zad2
    int licznik = std::count(wektor.begin(), wektor.end(), 7);
    cout << "wystapienie liczby 7=" << licznik << endl;
    // zad3
    sort(wektor.begin(), wektor.end(), myfunction);
    // myfunction i myclass dziala tak samo
    cout << "malejaco" << endl;
    for (const int& e : wektor) {
        cout << e << endl;
    }
    // zad4
    int licznik1 = count_if(wektor.begin(), wektor.end(), isbe7);
    cout << "liczba elementow wiekszych od 7=" << licznik1 << endl;
    // zad5
    cin >> a;
    int licznik2 = count_if(wektor.begin(), wektor.end(), isba);
    cout << "liczba elementow wiekszych od " << a << "=" << licznik2 << endl;
    // zad6
    int x;
    cin >> x;
    isboex liczba(x);
    int    liczbal;
    liczbal      = liczba.getNumber();
    int licznik3 = count_if(wektor.begin(), wektor.end(), liczba);
    cout << "liczba elementow wiekszych od " << liczbal << "=" << licznik3 << endl;
    // zad7
    int number;
    cout << "Podac liczbe do policzenia elementow od niech wiekszych" << endl;
    cin >> number;
    int licznik4 = count_if(wektor.begin(), wektor.end(), [&](int i) { return i > number; });
    cout << "liczba elementow wiekszych od " << number << "=" << licznik4 << endl;
    */
    // cw I
    /*
    string ciagznakow;
    cin >> ciagznakow;
    auto a1 = adjacent_find(ciagznakow.begin(), ciagznakow.end());
    if (a1 == ciagznakow.end()) {
        cout << 0 << endl;
    }
    else {
        cout << 1 << endl;
    }
    */
    // cw II
    /*
    string wyraz;
    cin >> wyraz;
    string piesek = "piesek";
    auto   sf     = search(wyraz.begin(), wyraz.end(), piesek.begin(), piesek.end());
    if (sf != wyraz.end()) {
        cout << 1 << " znaleziono podciag ze slowem \"piesek\"" << endl;
    }
    else {
        cout << 0 << " nie znaleziono podciagu ze slowem \"piesek\"" << endl;
    }
    */
    // cw III
    /*
    string wyrazdo;
    cin >> wyrazdo;
    reverse(wyrazdo.begin(), wyrazdo.end());
    for (auto it = wyrazdo.begin(); it != wyrazdo.end(); ++it) {
        std::cout << *it;
    }
    */
    // cw IV
    /*
    vector< double > wektor1;
    vector< double > wektor2;
    wektor1 = {1.1, 2.2, 3.3};
    wektor2 = {10.2, 20.4, 30.6};
    cout << inner_product(wektor1.begin(), wektor1.end(), wektor2.begin(), 0.0) << endl;
    */
    // cw V
    /*
    vector< int > wektor7;
    int           n = 10;
    wektor7         = make_random_vector(n, 0, 10);
    for (const int& e : wektor7) {
        cout << e << endl;
    }
    cout << "szukanie podciagu do 7" << endl;
    auto p = find(wektor7.begin(), wektor7.end(), 7);
    if (p != wektor7.end()) {
        sort(wektor7.begin(), p);
        for (const int& e : wektor7) {
            cout << e << endl;
        }
    }
    else {
        sort(wektor7.begin(), wektor7.end());
        for (const int& e : wektor7) {
            cout << e << endl;
        }
    */
    // cw VI
    
    }
}
