#include "my.h"

int main(){
    cout<<"Studento pazymiai"<<endl;
    int kiek;
    cout<<"Kiek studentu grupeje? ";
    cin>>kiek;
    
    vector<Studentas> grupe;
    grupe.reserve(kiek);
    
    for(int i=0; i<kiek; ++i) 
        grupe.push_back(Stud_kiek());
    
    cout<<endl<<"Rezultatai:"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<setw(10)<<left<<"Pavarde" 
        <<setw(10)<<left<<"Vardas" 
        <<setw(15)<<left<<"Galutinis(vid.)"<<endl;
    cout<<"----------------------------------------"<<endl;
    
    for(const auto& s : grupe)
        cout<<setw(10)<<left<<s.pavarde 
            <<setw(10)<<left<<s.vardas 
            <<setw(15)<<left<<std::fixed<<setprecision(2)<<s.galutinis<<endl;
    
    return 0;
}

