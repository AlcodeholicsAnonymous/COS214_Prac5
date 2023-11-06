#include "Meal.h"

Meal::Meal()
{
}

void Meal::setNext(Meal *meal)
{
    this->next = meal;
}

Meal *Meal::getNext()
{
    return nullptr;
}

Meal* Meal::getMeal() {
    return this;
}

void Meal::add(Meal m)
{
}

void Meal::remove(Meal m)
{
}

Meal *Meal::getChild(int child)
{
    return nullptr;
}

string Meal::getName()
{
    return string();
}

int Meal::getCategory()
{
    return 0;
}

int Meal::getMin()
{
    return 0;
}

int Meal::getMax()
{
    return 0;
}

int Meal::getCost()
{
    return 0;
}
