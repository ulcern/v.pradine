#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::setw;
using std::left;
using std::right;
using std::fixed;
using std::setprecision;

struct Studentas {
    string vardas;
    string pavarde;
    vector<int> pazymys;
    int egzaminas;
    double galutinis;
};

int main (){
    int n,laik_paz, sum=0;
    cout<<"Studentu pazymiu programa"<<endl;

    Studentas Pirmas;

    cout<<"Ivesk studento duomenis"<<endl;
    cout<<"Vardas: ";
    cin>>Pirmas.vardas;
    cout<<"Pavarde: ";
    cin>>Pirmas.pavarde;
    cout<<"Kiek pazymiu turi studentas: "<<Pirmas.vardas<<" "<<Pirmas.pavarde<<"? ";
    cin>>n;

    for 
}


