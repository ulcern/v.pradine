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
    
        for (int a=0; a<n;a++){
        cout<<a+1<<": ";
        cin>>laik_paz;
        Pirmas.pazymys.push_back(laik_paz);
        sum+=laik_paz;
    }

    cout<<"Galutinis egzamino pazymys: ";
    cin>>Pirmas.egzaminas;

    Pirmas.galutinis=(double)sum/(double)n*0.4+Pirmas.egzaminas*0.6;

    //Parodom rezultata/sukuriam lentele
    cout<<endl<<"Rezultatai:"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<setw(10)<<left<<"Pavarde"
        <<setw(10)<<left<<"Vardas"
        <<setw(10)<<left<<"Galutinis (vid.)"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<setw(10)<<left<<Pirmas.pavarde
        <<setw(10)<<left<<Pirmas.vardas
        <<setw(10)<<left<<fixed<<setprecision(2)<<Pirmas.galutinis<<endl;
    return 0;
}



