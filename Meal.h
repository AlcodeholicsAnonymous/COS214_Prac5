#pragma once
using namespace std;
#include "FoodBank.h";
#include <array>
#include <string>

class Meal {
private:
    Meal* thisMeal;
    Meal* next;
public:
	Meal();
    void setNext();
    Meal* getNext();
    Meal getMeal();
    void add(Meal m);
    void remove(Meal m);
    Meal getChild(int child);
    string getName();
    int getCategory();
    int getMin();
    int getMax();
    int getCost();
    
	~Meal();
};