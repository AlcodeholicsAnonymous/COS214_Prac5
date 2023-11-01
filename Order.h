#pragma once
#include <string>
#include "Customer.h"
#include "Meal.h"
using namespace std;

class Order {
private:
	Meal* meals;		//head
	string state;
	Customer* customer;
	Order* next;
public:
	Order(Customer* c);				//Construct empty order & assign customer
	void addMeal(Meal* meal);		//Add a meal to list
	bool removeMeal(string mealName);	//Remove meal from list - true if it was there - false if not
	void updateTab();				//Adds order to tab
	void payTab();					//Deletes tab
	Meal* getMeals();				//Returns meals linked list
	Meal* getMeal();					//Returns current meal
	Meal* getNextMeal();				//Returns next meal & set curMeal to next meal
	Customer* getCustomer();			
	void setCustomer(Customer* c);
	string getState();				
	void setState(string s);
	Order* getNextOrder();
	void setNextOrder(Order* o);
	~Order();
};

//Linked list of meals