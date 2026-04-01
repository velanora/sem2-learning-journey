#include <iostream>
#include <string>
using namespace std;

// class 1
class EidMela
{
    static int total_MelasHeld;
    static int totalStalls_AcrossAllMelas;

    string melaName;
    string location;

    int totalStalls;
    double entryFee;
    bool isOpen;

public:
    // Default constructor
    EidMela() : melaName("Unamed Mela"), location("TBD"), totalStalls(0), entryFee(0), isOpen(false)
    {
        total_MelasHeld++;
    }

    // parameterized constructor
    EidMela(string melaName, string location, int totalStalls, int entryFee)
    {
        this->melaName = melaName;
        this->location = location;
        this->totalStalls = totalStalls;
        this->entryFee = entryFee;
        isOpen = true;

        total_MelasHeld++;
        totalStalls_AcrossAllMelas += totalStalls;
    }

    // Destructor
    ~EidMela()
    {
        isOpen = false;
        cout << "[Mela Closed] Al-Noor Grand Eid Mela has ended.\n";
        cout << "See you at next EID \nKhuda Hafiz!\n";
        cout << endl;
    }

    void display()
    {
        cout << "----------------------------------------------------" << endl;
        cout << "MelaName : " << melaName << endl;
        cout << "location : " << location << endl;
        cout << "Total number of Stalls : " << totalStalls << endl;
        cout << "Entry Fee : " << entryFee << endl;

        cout << "Total Melas Held: " << total_MelasHeld << endl;
        cout << "Total Stalls Across All Melas: " << totalStalls_AcrossAllMelas << endl;
        cout << "----------------------------------------------------" << endl;
        cout << endl;
    }

    // member functions to access private data member
    static int get_total_MelasHeld()
    {
        return total_MelasHeld;
    }

    static int get_totalStalls_AcrossAllMelas()
    {
        return totalStalls_AcrossAllMelas;
    }
};

class SweetStall
{

    static int total_SweetStalls;
    static double totalRevenue_AllStalls;
    static int stallID_counter;

    string stallName;

    int stallID;

    string *sweetItems;
    int itemCount;
    int maxItems;
    double pricePerKg;
    double totalKgSold;

public:
    // default parameterized constructor
    SweetStall() : stallName("Unknown stall"), maxItems(3), pricePerKg(0), totalKgSold(0), stallID(stallID_counter), itemCount(0)
    {
        sweetItems = new string[maxItems];
        for (int i = 0; i < maxItems; i++)
        {
            sweetItems[i] = "Unknown";
        }
        stallID_counter++;
        total_SweetStalls++;
        totalRevenue_AllStalls += pricePerKg * totalKgSold;
    }

    // Parameterized constructor
    SweetStall(string arr_sweets[], string stallName, int maxItems, int pricePerKg, int totalKgSold)
    {
        stallID = stallID_counter;
        this->stallName = stallName;
        this->maxItems = maxItems;
        this->pricePerKg = pricePerKg;
        this->totalKgSold = totalKgSold;

        sweetItems = new string[maxItems];
        for (int i = 0; i < maxItems; i++)
        {
            sweetItems[i] = arr_sweets[i];
        }

        totalRevenue_AllStalls += pricePerKg * totalKgSold;
        stallID_counter++;
        total_SweetStalls++;
    }

    // deep copy constructor
    SweetStall(const SweetStall &S)
    {
        stallName = S.stallName;
        stallID = stallID_counter;
        maxItems = S.maxItems;
        sweetItems = new string[maxItems];
        pricePerKg = S.pricePerKg;
        totalKgSold = S.totalKgSold;

        for (int i = 0; i < maxItems; i++)
        {
            sweetItems[i] = S.sweetItems[i];
        }

        totalRevenue_AllStalls += pricePerKg * totalKgSold;
        stallID_counter++;
        total_SweetStalls++;
    }

    // display function
    void display()
    {

        cout << "-----------Sweet stall details---------" << endl;
        cout << " Stall Name : " << stallName << endl;

        cout << " Stall ID : " << stallID << endl;

        cout << " Sweet Items : ";
        for (int i = 0; i < maxItems; i++)
        {
            cout << sweetItems[i];
            if (i < maxItems - 1)
            {
                cout << ", ";
            }
        }
        cout << endl;

        cout << " Item count : " << itemCount << endl;
        cout << " max items : " << maxItems << endl;
        cout << " Price per KG : " << pricePerKg << endl;
        cout << " Total KG sold : " << totalKgSold << endl;

        cout << " Total sweet stalls : " << total_SweetStalls << endl;
        cout << " Total Revenue of all stalls : " << totalRevenue_AllStalls << endl;
        cout << "--------------------------------------" << endl;
    }

    // destructor
    ~SweetStall()
    {
        delete[] sweetItems;
        total_SweetStalls--;

        cout << "[Stall Closed]\n"
             << stallName << "(ID:" << stallID << ") has packed up.\nMa’assalam!\n\n";
    }

    // member functions to access private data member
    static int get_total_SweetStalls()
    {
        return total_SweetStalls;
    }

    static double get_totalRevenue_AllStalls()
    {
        return totalRevenue_AllStalls;
    }
};

class Visitor
{
    static int totalVisitors;
    static double totalEidiDistributed;
    static int visitorID_counter;
    string name;
    int visitorID;
    int age;
    double eidiReceived;
    double budget;
    string *purchasedItems;
    int purchaseCount;
    int maxPurchase;

public:
    // Default constructor
    Visitor() : name("Guest"), age(0), eidiReceived(0.0), budget(500.0), maxPurchase(5), visitorID(visitorID_counter)
    {

        purchasedItems = new string[maxPurchase];

        for (size_t i = 0; i < maxPurchase; i++)
        {
            purchasedItems[i] = "Unnamed";
        }
        totalEidiDistributed += eidiReceived;

        totalVisitors++;
        purchaseCount++;
        visitorID_counter++;
    }

    // Parameterized constructor
    Visitor(string name, int age, int eidiReceived, int budget, int maxPurchase) 
    {
        if (purchaseCount <= maxPurchase)
        {

            visitorID = visitorID_counter;
            this->name = name;
            this->age = age;
            this->eidiReceived = eidiReceived;
            this->budget = budget;
            this->purchaseCount = maxPurchase;
            this->maxPurchase = maxPurchase;
            purchasedItems = new string[maxPurchase];
            totalEidiDistributed += eidiReceived;

            for (size_t i = 0; i < maxPurchase; i++)
            {
                purchasedItems[i] = arr_pI[i];
            }

            
            totalVisitors++;
            visitorID_counter++;

        }
        else
        {
            cout<<"Maximum purchase limit reached you can't puchase further items "<<endl;
        }
    };

    // Copy constructor
    Visitor(const Visitor &V)
    {
        name = V.name;
        age = V.age;
        visitorID = visitorID_counter;
        budget = V.budget;
        eidiReceived = V.eidiReceived;
        maxPurchase = V.maxPurchase;
        purchasedItems = new string[maxPurchase];
        totalEidiDistributed += eidiReceived;

        for (int i = 0; i < maxPurchase; i++)
        {
            purchasedItems[i] = V.purchasedItems[i];
        }
        totalVisitors++;
        visitorID_counter++;
    }

    // display function
    void display()
    {

        cout << "----------- Visitor  details------------------------" << endl;
        cout << "Visitor Name : " << name << endl;

        cout << "Visitor ID : " << visitorID << endl;

        cout << "Purchased Items : ";
        for (int i = 0; i < maxPurchase; i++)
        {
            cout << purchasedItems[i];
            if (i < maxPurchase - 1)
            {
                cout << ", ";
            }
        }
        cout << endl;

        cout << "Budget : " << budget << endl;
        cout << "Eidi Received : " << eidiReceived << endl;

        cout << " Total Visitors : " << totalVisitors << endl;
        cout << " Total Revenue of all stalls : " << totalEidiDistributed << endl;
        cout << "----------------------------------------------------" << endl;
    }

    // setter function
    void setItems(string new_arr[], int size)
    {
        if (size > maxPurchase)
        {
            size = maxPurchase;
        }

        for (int i = 0; i < size; i++)
        {
            purchasedItems[i] = new_arr[i];
        }

        purchaseCount = size;
    }

    // Destructor
    ~Visitor()
    {
        delete[] purchasedItems;
        totalVisitors--;
        cout << "[Visitor Left] " << name << " has left the mela. \nEid Mubarak!\n";
    }

    // member functions to access private data member
    static int get_totalVisitors()
    {
        return totalVisitors;
    }

    static double get_totalEidiDistributed()
    {
        return totalEidiDistributed;
    }
};

int EidMela::total_MelasHeld = 0;
int EidMela::totalStalls_AcrossAllMelas = 0;

int SweetStall::total_SweetStalls = 0;
double SweetStall::totalRevenue_AllStalls = 0;
int SweetStall::stallID_counter = 101;

int Visitor::totalVisitors = 0;
double Visitor::totalEidiDistributed = 0;
int Visitor::visitorID_counter = 5001;

int main()
{
    // 1
    // objects of  class 1
    EidMela E1;
    E1.display();

    EidMela E2("Ali", "UBH", 5, 700);
    E2.display();

    cout << "\n\n\n\n";

    // 2
    // objects of  class 2

    SweetStall S1;
    S1.display();

    SweetStall S2(S1);
    S2.display();

    string sweets[3] = {"Sher khurma", "Sewaiyan", "Bar"};

    SweetStall S3(sweets, "Pak Bakers", 3, 1000, 3);
    S3.display();
    cout << "\n\n\n\n";

    // 3
    // objects of class 3
    Visitor V1;
    V1.display();

    string items2[3] = {"Jhumkay", "Kashmiri Churiyan", "Heels"};
    Visitor V2("Easha", 21, 600, 3000, 3, items2);
    V2.display();

    Visitor V3(V2);
    string V3_new_arr[3] = {"hijab", "nails", "mehndi"};
    V3.setItems(V3_new_arr, 3); // verification of deep copy
    V3.display();

    string items3[2] = {"Kurta", "Khussa"};
    Visitor V4("Ahmed", 25, 2000, 5000, 2, items3);
    V4.display();
    cout << "\n\n\n\n";

    // 4

    cout << "\n========= Nested Scope Test =========\n";
    {
        // sweet stall
        string sweets_block[3] = {"Gulab Jamun", "Barfi", "Jalebi"};
        SweetStall temp_S4(sweets_block, "Karachi Sweets", 3, 800, 50);

        // visitor
        string items_block[3] = {"Bangles", "Mehndi", "Scarf"};
        Visitor temp_V5("Sara", 19, 1500, 2500, 3, items_block);

        cout << "\nInside Block:\n";
        temp_S4.display();
        temp_V5.display();
    }
    cout << "\n=======================================\n";
    cout << "\n\n\n\n";

    // 5
    cout << "---------city-wide statistics---------" << endl;
    cout << "total Melas Held : " << EidMela::get_total_MelasHeld() << endl;
    cout << "total Stalls Across All Melas : " << EidMela::get_totalStalls_AcrossAllMelas() << endl;
    cout << "total Sweet Stalls : " << SweetStall::get_total_SweetStalls() << endl;
    cout << "Total Revenue All Stalls : " << SweetStall::get_totalRevenue_AllStalls() << endl;
    cout << "Total Visitors : " << Visitor::get_totalVisitors() << endl;
    cout << "Total Eidi Distributed : " << Visitor::get_totalEidiDistributed() << endl;
    cout << "-----------------------------------------" << endl;
    cout << endl;

    return 0;
}