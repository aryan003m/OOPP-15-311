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

double calculateTotal(const vector<Item>& cart) {
    double total = 0;

    for (const auto& item : cart) {
        total += item.quantity * item.price;
    }

    return total;
}
void applyDiscount(vector<Item>& cart) {
    for (auto& item : cart) {
        if (item.price > 1000) {
            item.price = item.price * 0.90;
        }
    }
}
Item findMostExpensiveItem(const vector<Item>& cart) {
    Item expensive = cart[0];

    for (const auto& item : cart) {
        if (item.price > expensive.price) {
            expensive = item;
        }
    }

    return expensive;
}

