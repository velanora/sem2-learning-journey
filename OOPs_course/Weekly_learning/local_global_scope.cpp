#include <iostream>
using namespace std;
class CreateAndDestroy {
private:
    int data;
public:
    //parameterize Constructor
    CreateAndDestroy(int value) {
        data = value;
        cout << "Construct " << data << endl;
    }
    // Destructor
    ~CreateAndDestroy() {
        cout << "Destruct " << data << endl;
    }
};
// Global object
CreateAndDestroy obj1(1);
// Function to create objects
void create() {
    //local objects in function
    CreateAndDestroy obj5(5);
    CreateAndDestroy obj6(6);
    CreateAndDestroy obj7(7);
}
int main() {
    //local object in main
    CreateAndDestroy obj2(2);
    CreateAndDestroy obj3(3);
    CreateAndDestroy obj4(4);
    create();
    return 0;
}