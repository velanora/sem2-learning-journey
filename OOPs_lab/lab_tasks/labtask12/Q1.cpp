#include<iostream>

using namespace std;

class MedicalRecord
{
    string diseaseName;
    int roomCharges;
    int treatmentCost;
    int totalCharges;

    public :

    MedicalRecord(string dN, int rC, int tC, int tchg)
    {
        diseaseName = dN;
        roomCharges = rC;
        treatmentCost = tC;
        totalCharges = tchg;
    }

    void display_patient()
    {
        cout<<"Disease name : "<<diseaseName<<endl;
        cout<<"Room Charges : "<<roomCharges<<endl;
        cout<<"Treatment Cost : "<<treatmentCost<<endl;
        cout<<"Total Charges : "<<totalCharges<<endl;
        cout<<endl;
    }

};

class Admission
{
    int ID;
    string name;
    MedicalRecord MR1;

    public :

    Admission(int ID, string name , string dN, int rC, int tC, int tchg) :MR1(dN, rC, tC, tchg)
    {
        this->ID= ID;
        this->name = name;

    }

    void display_admission()
    {
        cout<<"Patient ID : "<<ID<<endl;
        cout<<"patient name : "<<name<<endl;
        MR1.display_patient();
    }

};

int main()
{
    Admission p1(500 , "waleeja", "malaria", 1000 , 30000, 30100);

    Admission p2(501 , "Sunio", "Dysentary infection", 3000 , 30000, 30300);
    Admission p3(502 , "Nanhay doggy", "Mental", 4000 , 30000, 30400);

    p1.display_admission();
    p2.display_admission();
    p3.display_admission();

}