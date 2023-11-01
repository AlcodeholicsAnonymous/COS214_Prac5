using namespace std;

#include "Tab.h"

Tab::Tab(int cId) {
	customerId = cId;
	total = 0;
}

void Tab::addToTab(Order* o) {
	if (orders == nullptr) {
        orders = o;
        return;
    }
	Order* orderPtr = orders;
	while (orderPtr->getNextOrder() != nullptr) {
        orderPtr = orderPtr->getNextOrder();
    }
    orderPtr->setNextOrder(o);
}

void Tab::calcTotal() {
	//iterate through orders to iterate through meals & calc tot
}

Tab::~Tab() {
	// if (meals == nullptr) {
    //     return false;
    // }
    // Meal* mealPtr = meals;
    // while (mealPtr->getNext() != nullptr && mealPtr->getNext()->getName() != mealName) {
    //     mealPtr = mealPtr->getNext();
    // }
    // if (mealPtr->getNext() != nullptr && mealPtr->getNext()->getName() == mealName) {
    //     mealPtr->setNext(mealPtr->getNext()->getNext());
    //     mealPtr->getNext()->setNext(nullptr);
    //     return true;
    // }
    // return false;
}

