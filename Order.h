#pragma once
#include <string>
#include "Customer.h"
#include "Meal.h"
#include "OrderBackup.h"
using namespace std;

class Order {
private:
	Meal* meals;		//head
	string state;
	Customer* customer;
	Order* next;
public:
	Order(Customer* c);				//Construct empty order & assign customer
	~Order();

	void addMeal(Meal* meal);		//Add a meal to list
	bool removeMeal(string mealName);	//Remove meal from list - true if it was there - false if not
	
	Meal* getMeals();				//Returns meals linked list
	Meal* getMeal();					//Returns current meal
	Meal* getNextMeal();				//Returns next meal & set curMeal to next meal
	
	Customer* getCustomer();			
	void setCustomer(Customer* c);
	
	string getState();				
	void setState(string s);
	
	Order* getNextOrder();
	void setNextOrder(Order* o);
	OrderBackup* makeBackup();
	void restore(OrderBackup* ob);
};

//Linked list of meals