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
        cout << "Customer is paying now\n";
        payTab(o);
    } else {
        cout << "Customer is paying later\n";
        addToTab(o);
    }
}

void Waiter::addToTab(Order* o) {
    cout << "Adding to tab\n";
    database->addToTab(o, o->getCustomer()->getID());
    
}

void Waiter::payTab(Order* o) {
    this->addToTab(o);
    database->payTab(o->getCustomer()->getId());
}

void Waiter::createOrder(Customer *_c){
    Order* o = new Order(_c);
    string* mealList = o->getDishList();
    // o->addMeal(mealList[0]);
    // o->addMeal(mealList[0]);
    // o->addMeal(mealList[24]);
    // o->addMeal(mealList[24]);
    // o->addMeal(mealList[29]);
    // o->addMeal(mealList[29]);

    string str = "";

    bool flag = true;
    int choice, quantity;
    while (flag) {
        cout << "Please choose a food or drink item item or type -1 to finish order: \n";
        cin >> choice;

        if (choice == -1) {
            flag = false;
            break;
        }

        cout << "Please enter the quantity: \n";
        cin >> quantity;

        str += to_string(quantity) + " x " + mealList[choice] + "\n";

        for (int i = 0; i < quantity; i++)
        {
            o->addMeal(mealList[choice]);
        }
    }

    cout << "\nOrder contents:" << endl;
    cout << str << endl;
    this->takeOrder(o);
}
void Waiter::handleRequest(Order* o) {
    cout << "Waiter " << this->getID() << " has taken the order\n";
    this->takeOrder(o);
}
