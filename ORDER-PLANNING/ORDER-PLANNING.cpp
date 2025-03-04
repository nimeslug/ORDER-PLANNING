#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <iomanip>

using namespace std;

struct Dealer {
    int id;
    int* address;
    int orderAmount;
};

void createOrders(vector<Dealer>& dealers) {
    ofstream file("orders.txt");
    if (!file) {
        cerr << "File could not be opened!" << endl;
        return;
    }
    srand(time(0));

    file << left << setw(10) << "Dealer" << setw(20) << "Address" << setw(20) << "Order Amount" << endl;
    file << string(50, '-') << endl;

    for (int i = 0; i < 10; i++) {
        dealers[i].id = i + 1;
        dealers[i].orderAmount = rand() % 101;
        dealers[i].address = new int(i + 100); // Simulating random address
        file << left << setw(10) << dealers[i].id << setw(20) << dealers[i].address
            << setw(20) << dealers[i].orderAmount << endl;
    }
    file.close();
}

void shuffleOrder(vector<Dealer>& dealers) {
    random_shuffle(dealers.begin(), dealers.end());
}

void printOrders(vector<Dealer>& dealers, int& warehouse) {
    ofstream file("orders.txt", ios::app);
    if (!file) {
        cerr << "File could not be opened!" << endl;
        return;
    }

    cout << left << setw(10) << "Dealer" << setw(20) << "Address" << setw(20) << "Order Amount" << endl;
    cout << string(50, '-') << endl;
    file << "\n" << left << setw(10) << "Dealer" << setw(20) << "Address" << setw(20) << "Order Amount" << endl;
    file << string(50, '-') << endl;

    for (const auto& dealer : dealers) {
        cout << left << setw(10) << dealer.id << setw(20) << dealer.address
            << setw(20) << dealer.orderAmount << endl;
        file << left << setw(10) << dealer.id << setw(20) << dealer.address
            << setw(20) << dealer.orderAmount << endl;
        warehouse -= dealer.orderAmount;
    }

    cout << string(50, '-') << endl;
    cout << left << setw(30) << "Remaining Products in Warehouse:" << warehouse << endl;
    file << string(50, '-') << endl;
    file << left << setw(30) << "Remaining Products in Warehouse:" << warehouse << endl;
    file.close();
}

int main() {
    int warehouse = 1000;
    vector<Dealer> dealers(10);

    createOrders(dealers);
    shuffleOrder(dealers);
    printOrders(dealers, warehouse);

    for (auto& dealer : dealers) {
        delete dealer.address;
    }

    return 0;
}
