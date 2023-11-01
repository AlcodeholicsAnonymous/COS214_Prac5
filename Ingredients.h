#pragma once
using namespace std;
#include "Meal.h"

class Ingredients : public Meal{
private:

    string name ;
    int category;
    int min;
    int max;
    int cost;

public:
    Ingredients(string ingre);
    string getName();
    int getCategory();
    int getMin();
    int getMax();
    int getCost();
    


    ~Ingredients ();
};


