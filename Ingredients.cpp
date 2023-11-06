#pragma once
using namespace std;
#include "Ingredients.h"

Ingredients::Ingredients (string ingre) : Meal(){
   
    bool found = false;

    for(Food part : foodBank){
        if(part.name == ingre){
            found = true;
            this->category = part.category;
            this->name = part.name;
            this->min = part.min;
            this->max = part.max;
            this->cost = part.cost;
            break;            
        }
    }

    if(!found){
        this->category = 1;
        this->name = "Dogfood";
        this->min = 5;
        this->max = 50;
        this->cost = 250;
    }   

}

Ingredients ::~Ingredients (){
}
