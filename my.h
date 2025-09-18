#ifndef my_h
#define my_h

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
using std::setprecision;

struct Studentas{
    string vardas;
    string pavarde;
    vector<int> pazymys;
    int egzaminas;
    double galutinis;
};

Studentas Stud_kiek();

Studentas Stud_kiek(){
    Studentas Pirmas;
    int n, laik_paz, sum=0;
    cout<<"Ivesk studento duomenis"<<endl;
    cout<<"Vardas: ";
    cin>>Pirmas.vardas;
    cout<<"Pavarde: ";
    cin>>Pirmas.pavarde;
    cout<<"Kiek pazymiu turi studentas: "<<Pirmas.vardas<<" "<<Pirmas.pavarde<<"? ";
    cin>>n;
    for(int a=0; a<n; ++a){
        cout<<a+1<<": ";
        cin>>laik_paz;
        Pirmas.pazymys.push_back(laik_paz);
        sum+=laik_paz;
    }
    cout<<"Galutinis egzamino pazymys: ";
    cin>>Pirmas.egzaminas;
    Pirmas.galutinis=(double)sum/(double)n*0.4+Pirmas.egzaminas*0.6;
    return Pirmas;
}
#endif 

