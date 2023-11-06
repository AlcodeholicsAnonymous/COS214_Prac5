#include "Waiter.h"

Waiter::Waiter(Database* db) {
	database = db;
     if (database == nullptr) {
        cout << "Database is null pt.2\n";
    }
}

Waiter::~Waiter() {
}

int Waiter::getID() {
	return this->id;
}

void Waiter::takeOrder(Order* o) {
    successor->handleRequest(o);        
}

void Waiter::deliverOrder(Order* o) {
    o->getCustomer()->eat(o);
}

void Waiter::notify(Order* o) {
    // cout << "Waiter " << this->getID() << " has been notified of order completion" << endl;
    deliverOrder(o);
}

void Waiter::notify(Table*) {

}

void Waiter::notify(bool method, Order* o) {
    if (method) {
        // cout << "Customer is paying now\n";
        payTab(o);
    } else {
        cout << "Customer is paying later\n";
        addToTab(o);
    }
}

void Waiter::addToTab(Order* o) {
    cout << "Adding to tab\n";
    cout << "Customer ID: " << o->getCustomer()->getID() << endl;
    // database->addToTab(o, o->getCustomer()->getID());
    // database->randomPrintStatement();
    
}

void Waiter::payTab(Order* o) {
    database->addToTab(o, o->getCustomer()->getId());
    database->payTab(o->getCustomer()->getId());
}

void Waiter::createOrder(Customer *_c)
{
    Order* o = new Order(_c);
    string* mealList = o->getDishList();
    o->addMeal(mealList[0]);
    o->addMeal(mealList[0]);
    o->addMeal(mealList[24]);
    o->addMeal(mealList[24]);
    o->addMeal(mealList[29]);
    o->addMeal(mealList[29]);

    // bool flag = true;
    // int choice, quantity;
    // while (flag) {
    //     cout << "Please choose a food or drink item item or type -1 to finish order: \n";
    //     cin >> choice;

    //     if (choice == -1) {
    //         flag = false;
    //         break;
    //     }

    //     cout << "Please enter the quantity: \n";
    //     cin >> quantity;

        

    //     for (int i = 0; i < quantity; i++)
    //     {
    //         o->addMeal(mealList[choice]);
    //     }
    // }

    // o->printOrder();
    this->takeOrder(o);
}
