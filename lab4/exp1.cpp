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


int main() {
    vector<Item> cart;
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    // Taking item details from the user
    for (int i = 0; i < n; i++) {
        Item item;

        cout << "\nEnter item name: ";
        cin >> ws;
        getline(cin, item.name);

        cout << "Enter quantity: ";
        cin >> item.quantity;

        cout << "Enter price: ";
        cin >> item.price;

        cart.push_back(item);
    }

    // Displaying all items in the shopping cart
    displayCart(cart);

    // Calculating and displaying the original cart total
    cout << "\nOriginal Cart Total: Rs. "
         << calculateTotal(cart) << endl;

    // Finding and displaying the most expensive item
    if (!cart.empty()) {
        Item expensive = findMostExpensiveItem(cart);

        cout << "\nMost Expensive Item: " << expensive.name;
        cout << "\nUnit Price: Rs. " << expensive.price << endl;
    }

    // Applying discounts to eligible items
    applyDiscount(cart);

    // Displaying the updated cart after applying discounts
    cout << "\nCart After Applying Discounts:";
    displayCart(cart);

    // Calculating and displaying the updated cart total
    cout << "\nUpdated Cart Total: Rs. "
         << calculateTotal(cart) << endl;

    return 0;
}

