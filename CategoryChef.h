#pragma once

#include <iostream>
#include <string>
#include "Chef.h"

using namespace std;

class CategoryChef: public Chef {
private:
    int category;
    // Meal meal;
    CategoryChef* nextChef;\
    
public:
    string categories[9] = {"meat", "fish", "pizza", "fry", "burger", "pastry", "pasta", "salads", "drinks"};
    CategoryChef();
    CategoryChef(int cat);
    int getCategory() {
        return this->category;
    }
    void setCategory(int cat) {
        this->category = cat;
    }
    // void prepare(Meal meal);
    // Meal getMeal();
    // void handleRequest(Meal meal);
    void setNextChef(CategoryChef* nextChef) {
        this->nextChef = nextChef;
    }
    CategoryChef* getNextChef() {
        return this->nextChef;
    }
};