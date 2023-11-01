#pragma once 
#include <string>
using namespace std;

// category:

// 1: ingredients
// 2: meat 
// 3: fish
// 4: pizza
// 5: fry
// 6: burger
// 7: pastry
// 8: pasta
// 9: salads
// 10: drinks


    
const int vegPrepMin = 5;
const int vegPrepMax = 15;
const int vegCost = 7;

const int meatPrepMin = 10;
const int meatPrepMax = 20;


const int burgerMin = 100;
const int burgerMax = 130;

// 1: Ingredients 



struct Food{

    string name ;
    int category;
    int min;
    int max;
    int cost;
    string* ingredients;
    int size;

};

 Food foodBank[7]={
            {"BeefPatty",1,meatPrepMin,meatPrepMax,15,NULL,0}
            ,{"Cheese",1,5,5,10,NULL,0}
            ,{"Buns",1,5,5,10,NULL,0}
            ,{"Onion",1,vegPrepMin,vegPrepMax,vegCost,NULL,0}
            ,{"Lettuce",1,vegPrepMin,vegPrepMax,vegCost,NULL,0}
            ,{"Tomato",1,vegPrepMin,vegPrepMax,vegCost,NULL,0}
            ,{"Cheeseburger",6,burgerMin,burgerMax,90,cheeseBurgerIng,6}
        };

string cheeseBurgerIng[6] = {"Buns","BeefPatty","Cheese","Onion","Lettuce","Tomato"};

// struct{
//     const int category = 1;
//     string name = "Lettuce";
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;
// }Lettuce;

// struct{
//     const int category = 1;
//     string name = "Carrot" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;
// }Carrots;

// struct{
//     const int category = 1;
//     string name = "Potato" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;
// }Potato;

// struct{
//     const int category = 1;
//     string name = "Spinach" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Spinach;

// struct{
//     const int category = 1;
//     string name = "Beetroot" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Beetroot;

// struct{
//     const int category = 1;
//     string name = "Pumpkin" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Pumpkin;

// struct{
//     const int category = 1;
//     string name = "Mushroom" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Mushroom;


// struct{
//     const int category = 1;
//     string name = "Tomato" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Tomato;


// struct{
//     const int category = 1;
//     string name = "Bean" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Bean;

// struct{
//     const int category = 1;
//     string name = "Onion" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Onion;

// struct{
//     const int category = 1;
//     string name = "Broccoli" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Broccoli;

// struct{
//     const int category = 1;
//     string name = "Eggplant" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Eggplant;

// struct{
//     const int category = 1;
//     string name = "Corn" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Corn;

// struct{
//     const int category = 1;
//     string name = "Cabbage" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Cabbage;

// struct{
//     const int category = 1;
//     string name = "Rice" ;
//     const int min = 20;
//     const int max = 30;

// }Rice;

// struct{
//     const int category = 1;
//     string name = "Pineapple" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Pineapple;

// struct{
//     const int category = 1;
//     string name = "Garlic" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Garlic;

// struct{
//     const int category = 1;
//     string name = "Cucumber" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Cucumber;

// struct{
//     const int category = 1;
//     string name = "Avocado" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Avocado;

// struct{
//     const int category = 1;
//     string name = "Turnips" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Turnips;

// struct{
//     const int category = 1;
//     string name = "Asparagus" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Asparagus;

// struct{
//     const int category = 1;
//     string name = "Peppers" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Peppers;

// struct{
//     const int category = 1;
//     string name = "Pineapple" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Pineapple;

// struct{
//     const int category = 1;
//     string name = "Strawberries" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Strawberries;

// struct{
//     const int category = 1;
//     string name = "Herbs" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Herbs;

// struct{
//     const int category = 1;
//     string name = "Squash" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Squash;

// struct{
//     const int category = 1;
//     string name = "Pea" ;
//     const int min = vegPrepMin;
//     const int max = vegPrepMax;
//     const int cost = vegCost;

// }Pea;

// struct{
//     const int category = 1;
//     string name = "Beefpatty" ;
//     const int min = meatPrepMin;
//     const int max = meatPrepMax;
//     const int cost = 15;
// }Beef_Patty;

// struct{
//     const int category = 1;
//     string name = "Cheese" ;
//     const int min = 5;
//     const int max = 5;
//     const int cost = 15;
// }Cheese;

// struct {
//     const int category = 8;
//     string name = "Buns" ;
//     const int min = 10;
//     const int max = 20;
//     const int cost = 10;

// }Buns;


// struct Dishes{

//     int category;
//     string name ;
//     int min;
//     int max;
//     int cost;
    

// };

//   Dishes foodBankDishes[2]={
//             {fries.category,fries.name,fries.min,fries.max,fries.cost,1,fries.ingredients}
//             ,{cheeseBurger.category,cheeseBurger.name,cheeseBurger.min,cheeseBurger.max,cheeseBurger.cost,5,cheeseBurger.ingredients}
//         };


// // 2; Meat

// struct{
//     const int category = 2;
//     string name = "Sirloin";
//     const int min = meatPrepMin;
//     const int max = meatPrepMax;
//     const int cost = 100;

// }Sirloin;



// //Baker





// // 3: fish


// // 4: pizza


// // 5: fry

// struct{
//     const int category = 8;
//     string name = "Fries";
//     const int min = 10;
//     const int max = 10;
//     const int cost = 20;
//     IngredientPart ingredients[1]={{
//         Potato.category,Potato.name,Potato.min,Potato.max,Potato.cost
//     }};
 
// }fries;

// // 6: burger

// const int burgerMin =100;
// const int burgerMax =130;

// struct{

//     const int category = 6;
//     string name = "Cheeseburger";
//     const int min = 100;
//     const int max = 130;
//     const int cost = 90;
//     IngredientPart ingredients[5]={
//             {Beef_Patty.category,Beef_Patty.name,Beef_Patty.min,Beef_Patty.max,Beef_Patty.cost}
//             ,{Cheese.category,Cheese.name,Cheese.min,Cheese.max,Cheese.cost}
//             ,{Onion.category,Onion.name,Onion.min,Onion.max,Onion.cost}
//             ,{Lettuce.category,Lettuce.name,Lettuce.min,Lettuce.max,Lettuce.cost}
//             ,{Tomato.category,Tomato.name,Tomato.min,Tomato.max,Tomato.cost}
//         };

// }cheeseBurger;



// // 7: pastry
// // 8: pasta
// // 9: salads
// // 10: drinks























