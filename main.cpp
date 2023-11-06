#include <iostream>
#include <string>
#include "HeadChef.h"
#include "CategoryChef.h"
#include "Chef.h"
#include "Waiter.h"

using namespace std;

int main() {
    cout << endl;
    
    Order* order = new Order();

    CategoryChef* categoryChef = new CategoryChef();
    CategoryChef* categoryChef2 = new CategoryChef();

    CategoryChef* chefs = new CategoryChef[2];
    chefs[0] = *categoryChef;
    chefs[1] = *categoryChef2;
    Employee* headChef = new HeadChef(chefs);
    Database* database = new Database();
    Waiter* waiter = new Waiter(database);
    Booking* booking = new Booking();
    Customer* customer = new Customer(booking, 2);
    waiter->setSuccessor(headChef);
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
            for (int i = 0; i < 5; i++){
                cout << i << ". " << menu[i] << endl;
            }
            break;
        case 2:
            customer->createOrder();
            break;
        default:
            cout << "Invalid option\n";
            break;
        }

    }
    
    return 0;
}
