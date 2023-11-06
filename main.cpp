#include <iostream>
#include <string>
#include "HeadChef.h"
#include "CategoryChef.h"
#include "Chef.h"
#include "Waiter.h"
#include "Table.h"

using namespace std;

CategoryChef* populateChefs();
void displayMenu();

int main() {
    cout << endl;
    
    Order* order = new Order();
    Employee* headChef = HeadChef::getHeadChef();
    Database* database = new Database();
    Waiter* waiter = new Waiter(database);
    Table* table = new Table(5, true, 1);
    table->setWaiter(waiter);
    Booking* booking = new Booking(table);
    Customer* customer = new Customer(booking, 2);
    waiter->setSuccessor(headChef);
    // waiter->setSuccessor(headChef);
    headChef->setSuccessor(waiter);
    string* menu = order->getDishList();

    while (true){
        cout << "Please pick an option: \n";
        cout << "0. Exit\n";
        cout << "1. Display menu\n";
        cout << "2. Start order\n";

        int option;
        cin >> option;

        if (menu == nullptr)
        {
            cout << "Menu is empty\n";
        }
        
        switch (option)
        {
        case 0:
            cout << "Exiting...\n";
            return 0;
        case 1:
            cout << "Menu: \n";
            displayMenu();
            break;
        case 2:
            waiter->createOrder(customer);
            break;
        default:
            cout << "Invalid option\n";
            break;
        }

    }
    
    return 0;
}

void displayMenu() {
    cout << "________________________________" << endl;
    cout << "Mains: \n";
    for (int i = 0; i < 24; i++)
    {
        cout << "|-" << i << ". " << foodBank[i].name << endl;
    }
    cout << "Desserts: \n";
    for (int i = 24; i < 29; i++)
    {
        cout << "|-" << i << ". " << foodBank[i].name << endl;
    }
    cout << "Drinks: \n";
    for (int i = 29; i < 40; i++)
    {
        cout << "|-" << i << ". " << foodBank[i].name << endl;
    }
    cout << "________________________________" << endl;
}
