#pragma once
using namespace std;
#include "Meal.h"

class Ingredients : public Meal
{
private:
    Meal *next = nullptr;
    Meal *thisMeal = nullptr;
    string name;
    int category;
    int min;
    int max;
    int cost;

public:
    Ingredients(string ingre);
    void setNext(Meal *nextMeal);

    Meal* getNext(){ return nullptr; }
    Meal* getMeal(){ return nullptr; }
    void add(Meal m){}
    void remove(Meal m){}
    Meal* getChild(int child){ return nullptr; }
    string getName(){ return ""; }
    int getCategory(){}
    int getMin(){}
    int getMax(){}
    int getCost(){}

    ~Ingredients();
};
