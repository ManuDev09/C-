#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor: Object created!" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor: Object destroyed!" << endl;
    }
};
 
int main() {
    cout << "Main function starts" << endl;
    
    // Create an object of MyClass
    MyClass obj;

    // Object goes out of scope here and destructor will be called automatically.
    cout << "Main function ends" << endl;

    return 0;
}
