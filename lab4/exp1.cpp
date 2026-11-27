#include <iostream>
#include <vector>
#include <iomanip>
#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;
    double price;
};

void displayCart(const vector<Item>& cart) {
    cout << "\nSHOPPING CART\n";

    cout << left << setw(20) << "Item Name"
         << setw(15) << "Quantity"
         << setw(15) << "Price"
         << setw(15) << "Amount" << endl;

    cout << "---------------------------------------------------------\n";

    for (const auto& item : cart) {
        cout << left << setw(20) << item.name
             << setw(15) << item.quantity
             << setw(15) << fixed << setprecision(2) << item.price
             << setw(15) << item.quantity * item.price << endl;
    }

    cout << "---------------------------------------------------------\n";
}