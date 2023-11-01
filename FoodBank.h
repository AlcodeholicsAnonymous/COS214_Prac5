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


    
const int ingredPrepMin = 5;
const int ingredPrepMax = 15;
const int ingredCost = 10;

const int meatPrepMin = 10;
const int meatPrepMax = 20;
const int meatCost = 20;

const int fishMin = 60;
const int fishMax = 100;
const int fishCost = 100;

const int pizzaMin = 150;
const int pizzaMax = 200;
const int pizzaCost = 90;

const int fryMin = 20;
const int fryMax = 120;
const int fryCost = 50;

const int burgerMin = 100;
const int burgerMax = 130;
const int burgerCost = 110;

const int pastryMin = 200;
const int pastryMax = 250;
const int pastryCost = 75;

const int pataMin = 100;
const int pastaMax = 150;
const int pastaCost = 85;

const int saladMin = 20;
const int saladMax = 30;
const int saladCost = 40;

const int drinksMin = 10;
const int drinksMax = 50;
const int drinkCost = 20;


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

 Food foodBank[250]={
            {"BeefPatty",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Cheddar",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Buns",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Onion",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Lettuce",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Tomato",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Cheeseburger",6,burgerMin,burgerMax,90,cheeseBurgerIng,6}    /*Test Burger*/
            ,{"Pumpkin",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}    /*Ingredients*/
            ,{"Carrot",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Potato",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Spinach",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Beetroot",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Mushroom",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Lemon",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Bean",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Eggplant",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Zucchini",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Rice",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Salt",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Pineapple",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Avocado",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Garlic",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Cucumber",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Peppers",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Butter",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Batter",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"BBQSauce",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Asparagus",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Herbs",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Squash",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Peas",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Beef",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Lamb",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Pork",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Chicken",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Salmon",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Hake",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Sole",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Prawn",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Calamari",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Tuna",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Lobster",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Mussels",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Oyster",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"PizzaBase",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Mozzarella",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"TomatoSauce",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Pepperoni",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Anchovies",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Salami",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Sausages",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Jalapeno",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Ham",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Olives",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Parmesan",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"GlutenFreePizzaBase",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Dough",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Tofu",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Crumbs",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Nachos",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"PorkPatty",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"ChickenPatty",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"FishPatty",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Pickles",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Egg",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Bacon",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Apples",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Cinnamon",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"PastryDough",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Noodles",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Spaghetti",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Macaroni",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"LasagnaStrips",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"StuffedPasta",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Sauce",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Ravioli",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"OliveOil",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Feta",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Milk",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Coke",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"CoffeeBeans",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"RooiBos",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"TeaHerbs",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Sugar",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Vanilla",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Chocolate",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"IceCream",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Bubblegum",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Strawberry",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Lime",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Water",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Hazelnut",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Whiskey",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Vodka",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Brandy",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Wine",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Beer",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Tequila",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Gin",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"FlavouredSyrup",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Cherry",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0} 
            ,{"Cream",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Fanta",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Sprite",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"CreamSoda",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}
            ,{"Raspberry",1,ingredPrepMin,ingredPrepMax,ingredCost,NULL,0}  /*Meat*/
            ,{"Sirloin",2,meatPrepMin,meatPrepMax,meatCost,steak,2}
            ,{"Fillet",2,meatPrepMin,meatPrepMax,meatCost,steak,2}
            ,{"TBone",2,meatPrepMin,meatPrepMax,meatCost,steak,2}
            ,{"Rump",2,meatPrepMin,meatPrepMax,meatCost,steak,2}
            ,{"LambChops",2,meatPrepMin,meatPrepMax,meatCost,lamb,3}
            ,{"LambRibs",2,meatPrepMin,meatPrepMax,meatCost,lamb,3}
            ,{"PorkChops",2,meatPrepMin,meatPrepMax,meatCost,pork,2}
            ,{"PorkRibs",2,meatPrepMin,meatPrepMax,meatCost,pork,2}
            ,{"Eisbein",2,meatPrepMin,meatPrepMax,meatCost,pork,2}
            ,{"ChickenNuggets",2,meatPrepMin,meatPrepMax,meatCost,chickenCrumbed,2}
            ,{"Schnitzel",2,meatPrepMin,meatPrepMax,meatCost,chickenCrumbed,2}
            ,{"FriedHake",3,fishMin,fishMax,fishCost,friedHake,6}
            ,{"FishCake",3,fishMin,fishMax,fishCost,friedHake,6}
            ,{"GrilledHake",3,fishMin,fishMax,fishCost,grilledHake,5}
            ,{"KingSalmon",3,fishMin,fishMax,fishCost,salmon,5}
            ,{"GrilledSole",3,fishMin,fishMax,fishCost,sole,5}
            ,{"KingPrawn",3,fishMin,fishMax,fishCost,prawn,5}
            ,{"GrilledCalamari",3,fishMin,fishMax,fishCost,grilledCalamari,5}
            ,{"RawTuna",3,fishMin,fishMax,fishCost,rawTuna,1}
            ,{"LobsterClaw",3,fishMin,fishMax,fishCost,lobster,5}
            ,{"WholeLobster",3,fishMin,fishMax,150,lobster,5}
            ,{"MusselSide",3,fishMin,fishMax,50,mussel,5}
            ,{"MusselPot",3,fishMin,fishMax,fishCost,mussel,5}
            ,{"ThreeOysters",3,fishMin,fishMax,fishCost,oyster,3}
            ,{"SixOysters",3,fishMin,fishMax,200,oyster,3}
            ,{"SixOysters",3,fishMin,fishMax,200,oyster,3}
            ,{"Margherita Pizza", 4, pizzaMin, pizzaMax, pizzaCost, margheritaPizzaIng, 2}
            ,{"Pepperoni Pizza", 4, pizzaMin, pizzaMax, pizzaCost, pepperoniPizzaIng, 2}
            ,{"Vegetarian Pizza", 4, pizzaMin, pizzaMax, pizzaCost, vegetarianPizzaIng, 6}
            ,{"Hawaiian Pizza", 4, pizzaMin, pizzaMax, pizzaCost, hawaiianPizzaIng, 4}
            ,{"BBQ Chicken Pizza", 4, pizzaMin, pizzaMax, pizzaCost, bbqChickenPizzaIng, 4}
            ,{"Mushroom Pizza", 4, pizzaMin, pizzaMax, pizzaCost, mushroomPizzaIng, 4}
            ,{"Veggie Supreme Pizza", 4, pizzaMin, pizzaMax, pizzaCost, veggieSupremePizzaIng, 7}
            ,{"Meat Lovers Pizza", 4, pizzaMin, pizzaMax, pizzaCost, meatLoversPizzaIng, 5}
            ,{"Supreme Pizza", 4, pizzaMin, pizzaMax, pizzaCost, supremePizzaIng, 7}
            ,{"White Pizza", 4, pizzaMin, pizzaMax, pizzaCost, whitePizzaIng, 3}
            ,{"Buffalo Chicken Pizza", 4, pizzaMin, pizzaMax, pizzaCost, buffaloChickenPizzaIng, 4}
            ,{"BBQ Pulled Pork Pizza", 4, pizzaMin, pizzaMax, pizzaCost, bbqPulledPorkPizzaIng, 4}
            ,{"Mediterranean Pizza", 4, pizzaMin, pizzaMax, pizzaCost, mediterraneanPizzaIng, 6}
            ,{"French Fries", 5, fryMin, fryMax, fryCost, frenchFriesIng, 2}
            ,{"Onion Rings", 5, fryMin, fryMax, fryCost, onionRingsIng, 2}
            ,{"Sweet Potato Fries", 5, fryMin, fryMax, fryCost, sweetPotatoFriesIng, 2}
            ,{"Zucchini Fries", 5, fryMin, fryMax, fryCost, zucchiniFriesIng, 2}
            , {"Curly Fries", 5, fryMin, fryMax, fryCost, curlyFriesIng, 2}
            ,{"Garlic Parmesan Fries", 5, fryMin, fryMax, fryCost, garlicParmesanFriesIng, 3}
            ,{"Loaded Chili Cheese Fries", 5, fryMin, fryMax, fryCost, loadedChiliCheeseFriesIng, 4}
            ,{"Apple Pie", 7, pastryMin, pastryMax, pastryCost, applePieIng, 3}
            ,{"Chocolate Croissant", 7, pastryMin, pastryMax, pastryCost, chocolateCroissantIng, 3}
            ,{"Danish Pastry", 7, pastryMin, pastryMax, pastryCost, danishPastryIng, 3}
            ,{"Eclair", 7, pastryMin, pastryMax, pastryCost, eclairIng, 4}
            ,{"Cinnamon Roll", 7, pastryMin, pastryMax, pastryCost, cinnamonRollIng, 3}
            ,{"BBQ Bacon Burger", 6, burgerMin, burgerMax, burgerCost, bbqBaconBurgerIng, 6}
            ,{"Mushroom Swiss Burger", 6, burgerMin, burgerMax, burgerCost, mushroomSwissBurgerIng, 5}
            ,{"Spicy Jalapeno Burger", 6, burgerMin, burgerMax, burgerCost, spicyJalapenoBurgerIng, 5}
            ,{"Veggie Burger", 6, burgerMin, burgerMax, burgerCost, veggieBurgerIng, 6}
            ,{"Double Patty Burger", 6, burgerMin, burgerMax, burgerCost, doublePattyBurgerIng, 7}
            ,{"Bacon Avocado Burger", 6, burgerMin, burgerMax, burgerCost, baconAvocadoBurgerIng, 6}
            ,{"Teriyaki Pineapple Burger", 6, burgerMin, burgerMax, burgerCost, teriyakiPineappleBurgerIng, 5}
            ,{"Buffalo Chicken Burger", 6, burgerMin, burgerMax, burgerCost, buffaloChickenBurgerIng, 4}
            ,{"Blue Cheese Burger", 6, burgerMin, burgerMax, burgerCost, blueCheeseBurgerIng, 5}
            ,{"Spaghetti Aglio e Olio", 8, pataMin, pastaMax, pastaCost, spaghettiAglioEOlioIng, 2}
            ,{"Penne Arrabbiata", 8, pataMin, pastaMax, pastaCost, penneArrabbiataIng, 3}
            ,{"Linguine with Clams", 8, pataMin, pastaMax, pastaCost, linguineClamsIng, 3}
            ,{"Fettuccine Pesto", 8, pataMin, pastaMax, pastaCost, fettuccinePestoIng, 2}
            ,{"Cavatelli with Broccoli", 8, pataMin, pastaMax, pastaCost, cavatelliBroccoliIng, 2}
            ,{"Rigatoni with Tomato Sauce", 8, pataMin, pastaMax, pastaCost, rigatoniTomatoSauceIng, 2}
            ,{"Spaghetti Puttanesca", 8, pataMin, pastaMax, pastaCost, spaghettiPuttanescaIng, 5}
            ,{"Penne with Vodka Sauce", 8, pataMin, pastaMax, pastaCost, penneVodkaIng, 4}
            ,{"Linguine Aglio e Olio", 8, pataMin, pastaMax, pastaCost, linguineAglioEOlioIng, 2}
            ,{"Fettuccine Alfredo", 8, pataMin, pastaMax, pastaCost, fettuccineAlfredoIng, 4}
            ,{"Caesar Salad", 9, saladMin, saladMax, saladCost, caesarSaladIng, 4}
            ,{"Garden Salad", 9, saladMin, saladMax, saladCost, gardenSaladIng, 3}
            ,{"Greek Salad", 9, saladMin, saladMax, saladCost, greekSaladIng, 5}
            ,{"Caprese Salad", 9, saladMin, saladMax, saladCost, capreseSaladIng, 3}
            ,{"Cobb Salad", 9, saladMin, saladMax, saladCost, cobbSaladIng, 6}
            ,{"Spinach and Strawberry Salad", 9, saladMin, saladMax, saladCost, spinachStrawberrySaladIng, 4}
            ,{"Waldorf Salad", 9, saladMin, saladMax, saladCost, waldorfSaladIng, 5}
            ,{"Asian Noodle Salad", 9, saladMin, saladMax, saladCost, asianNoodleSaladIng, 5}
            ,{"Mediterranean Salad", 9, saladMin, saladMax, saladCost, mediterraneanSaladIng, 5}
            ,{"Antipasto Salad", 9, saladMin, saladMax, saladCost, antipastoSaladIng, 6}
            ,{"Coca-Cola", 10, drinksMin, drinksMax, drinkCost, cocaColaIng, 1}
            ,{"Pepsi", 10, drinksMin, drinksMax, drinkCost, pepsiIng, 1}
            ,{"Sprite", 10, drinksMin, drinksMax, drinkCost, spriteIng, 1}
            ,{"Mountain Dew", 10, drinksMin, drinksMax, drinkCost, mountainDewIng, 1}
            ,{"Root Beer", 10, drinksMin, drinksMax, drinkCost, rootBeerIng, 1}
            ,{"Iced Tea", 10, drinksMin, drinksMax, drinkCost, icedTeaIng, 1}
            ,{"Lemonade", 10, drinksMin, drinksMax, drinkCost, lemonadeIng, 3}
            ,{"Orange Juice", 10, drinksMin, drinksMax, drinkCost, orangeJuiceIng, 1}
            ,{"Cranberry Juice", 10, drinksMin, drinksMax, drinkCost, cranberryJuiceIng, 1}
            ,{"Grape Juice", 10, drinksMin, drinksMax, drinkCost, grapeJuiceIng, 1}
            ,{"Apple Juice", 10, drinksMin, drinksMax, drinkCost, appleJuiceIng, 1}
            ,{"Lime Soda", 10, drinksMin, drinksMax, drinkCost, limeSodaIng, 1}
            ,{"Cherry Soda", 10, drinksMin, drinksMax, drinkCost, cherrySodaIng, 1}
            ,{"Fruit Punch", 10, drinksMin, drinksMax, drinkCost, fruitPunchIng, 1}
            ,{"Lemon-Lime Soda", 10, drinksMin, drinksMax, drinkCost, lemonLimeSodaIng, 1}
            ,{"Mango Smoothie", 10, drinksMin, drinksMax, drinkCost, mangoSmoothieIng, 2}
            ,{"Strawberry Banana Smoothie", 10, drinksMin, drinksMax, drinkCost, strawberryBananaSmoothieIng, 2}
            ,{"Pina Colada", 10, drinksMin, drinksMax, drinkCost, pinaColadaIng, 3}
            ,{"Mojito", 10, drinksMin, drinksMax, drinkCost, mojitoIng, 3}
            ,{"Espresso", 10, drinksMin, drinksMax, drinkCost, espressoIng, 1}
            
        };

string cheeseBurgerIng[6] = {"Buns","BeefPatty","Cheddar","Onion","Lettuce","Tomato"};
string steak[2] = {"Beef","Herbs"};
string lamb[3] ={"Lamb","Herbs","Lemon"};
string pork[2] = {"Pork","Herbs"};
string chickenCrumbed[2] ={"Chicken","Crumbs"};
string chicken[2] ={"Chicken","Crumbs"};
string friedHake[6] ={"Hake","Crumbs","Herbs","Garlic","Butter","Lemon"};
string grilledHake[5] ={"Hake","Herbs","Garlic","Butter","Lemon"};
string salmon[5] = {"Salmon","Herbs","Garlic","Butter","Lemon"};
string sole[5] = {"Sole","Herbs","Garlic","Butter","Lemon"};
string prawn[5] = {"Pawn","Herbs","Garlic","Butter","Lemon"};
string grilledCalamari[5] = {"Calamari","Herbs","Garlic","Butter","Lemon"};
string rawTuna[1] = {"Tuna"};
string lobster[5] = {"Lobster","Herbs","Garlic","Butter","Lemon"};
string mussel[5] = {"Mussels","Herbs","Garlic","Butter","Lemon"};
string oyster[3] = {"Oyster","Herbs","Lemon"};
string margheritaPizzaIng[2] = {"PizzaBase", "TomatoSauce"};
string pepperoniPizzaIng[2] = {"PizzaBase", "Pepperoni"};
string vegetarianPizzaIng[6] = {"PizzaBase", "Mozzarella", "TomatoSauce", "Peppers", "Mushroom", "Olives"};
string hawaiianPizzaIng[4] = {"PizzaBase", "Mozzarella", "TomatoSauce", "Ham"};
string bbqChickenPizzaIng[4] = {"PizzaBase", "Mozzarella", "BBQSauce", "Chicken"};
string mushroomPizzaIng[4] = {"PizzaBase", "TomatoSauce", "Mushroom", "Mozzarella"};
string veggieSupremePizzaIng[7] = {"PizzaBase", "TomatoSauce", "Mushroom", "Peppers", "Olives", "Onion", "Mozzarella"};
string meatLoversPizzaIng[5] = {"PizzaBase", "TomatoSauce", "Pepperoni", "Bacon", "Sausages"};
string supremePizzaIng[7] = {"PizzaBase", "TomatoSauce", "Pepperoni", "Olives", "Peppers", "Mushroom", "Sausages"};
string whitePizzaIng[3] = {"PizzaBase", "Garlic", "Mozzarella"};
string buffaloChickenPizzaIng[4] = {"PizzaBase", "TomatoSauce", "Chicken", "Cheddar"};
string bbqPulledPorkPizzaIng[4] = {"PizzaBase", "BBQSauce", "Pulled Pork", "Onion"};
string mediterraneanPizzaIng[6] = {"PizzaBase", "TomatoSauce", "Feta", "Olives", "Peppers", "Onion"};
string frenchFriesIng[2] = {"Potato", "Salt"};
string onionRingsIng[2] = {"Onion", "Batter"};
string sweetPotatoFriesIng[2] = {"Squash", "Salt"};
string zucchiniFriesIng[2] = {"Zucchini", "Batter"};
string curlyFriesIng[2] = {"Potato", "Salt"};
string garlicParmesanFriesIng[3] = {"Potato", "Garlic", "Parmesan"};
string loadedChiliCheeseFriesIng[4] = {"Potato", "Jalapeno", "Cheddar", "Onions"};
string applePieIng[3] = {"PastryDough", "Apples", "Sugar"};
string chocolateCroissantIng[3] = {"PastryDough", "Chocolate", "Butter"};
string danishPastryIng[3] = {"PastryDough", "Cream", "Apples"};
string eclairIng[4] = {"PastryDough", "Cream", "Chocolate", "Vanilla"};
string cinnamonRollIng[3] = {"PastryDough", "Cinnamon", "Sugar"};
string bbqBaconBurgerIng[6] = {"Buns", "BeefPatty", "Bacon", "BBQ Sauce", "Onion", "Lettuce"};
string mushroomSwissBurgerIng[5] = {"Buns", "BeefPatty", "Mushrooms", "Cheddar", "Onion"};
string spicyJalapenoBurgerIng[5] = {"Buns", "BeefPatty", "Jalapeno", "Pepper", "Lettuce"};
string veggieBurgerIng[6] = {"Buns", "BeefPatty", "Cheddar", "Onion", "Lettuce", "Tomato"};
string doublePattyBurgerIng[7] = {"Buns", "BeefPatty", "BeefPatty", "Cheese", "Onion", "Lettuce", "Tomato"};
string baconAvocadoBurgerIng[6] = {"Buns", "BeefPatty", "Bacon", "Avocado", "Onion", "Lettuce"};
string teriyakiPineappleBurgerIng[5] = {"Buns", "BeefPatty", "Seasoning", "Pineapple", "Lettuce"};
string buffaloChickenBurgerIng[4] = {"Buns", "ChickenPatty", "TomatoSauce", "Parmesan"};
string blueCheeseBurgerIng[5] = {"Buns", "BeefPatty", "Bacon", "Parmesan", "Lettuce"};
string spaghettiAglioEOlioIng[2] = {"Spaghetti", "Garlic"};
string penneArrabbiataIng[3] = {"LasagnaStrips", "Sauce", "Parmesan"};
string linguineClamsIng[3] = {"LasagnaStrips", "Oyster", "Garlic"};
string fettuccinePestoIng[2] = {"Spaghetti", "Sauce"};
string cavatelliBroccoliIng[2] = {"Spaghetti", "Broccoli"};
string rigatoniTomatoSauceIng[2] = {"Ravioli", "TomatoSauce"};
string spaghettiPuttanescaIng[5] = {"Spaghetti", "TomatoSauce", "Olives", "Garlic", "Garlic"};
string penneVodkaIng[4] = {"Ravioli", "Vodka", "Cream", "Parmesan"};
string linguineAglioEOlioIng[2] = {"Ravioli", "Garlic"};
string fettuccineAlfredoIng[4] = {"Spaghetti", "Cream", "Parmesan", "Butter"};
string caesarSaladIng[4] = {"Lettuce", "Crumbs", "Parmesan", "OliveOil"};
string gardenSaladIng[3] = {"Beans", "Tomato", "Cucumber"};
string greekSaladIng[5] = {"Lettuce", "Tomato", "Cucumber", "Olives", "Feta"};
string capreseSaladIng[3] = {"Tomato", "Mozzarella", "Herbs"};
string cobbSaladIng[6] = {"Beans", "Chicken", "Bacon", "Egg", "Avocado", "Blue Cheese"};
string spinachStrawberrySaladIng[4] = {"Lettuce", "Strawberry", "Herbs", "Peas"};
string waldorfSaladIng[5] = {"Beans", "Apples", "Garlic", "Herbs", "Sauce"};
string asianNoodleSaladIng[5] = {"Noodles", "Cabbage", "Carrots", "Noodles", "Sauce"};
string mediterraneanSaladIng[5] = {"Beans", "Tomato", "Cucumber", "Onion", "Feta"};
string antipastoSaladIng[6] = {"Beans", "Salami", "Olives", "Anchovies", "Mozzarella", "Sauce"};
string cocaColaIng[1] = {"Coke"};
string pepsiIng[1] = {"Coke"};
string spriteIng[1] = {"Sprite"};
string mountainDewIng[1] = {"Fanta"};
string rootBeerIng[1] = {"Beer"};
string icedTeaIng[1] = {"RooiBos"};
string lemonadeIng[3] = {"Lemon","Water","Sugar"};
string orangeJuiceIng[1] = {"Fanta"};
string cranberryJuiceIng[1] = {"Sauce"};
string grapeJuiceIng[1] = {"Wine"};
string appleJuiceIng[1] = {"Brandy"};
string limeSodaIng[1] = {"Sprite"};
string cherrySodaIng[1] = {"Sprite"};
string fruitPunchIng[1] = {"Wine"};
string lemonLimeSodaIng[1] = {"Sprite"};
string mangoSmoothieIng[2] = {"Sauce", "Cream"};
string strawberryBananaSmoothieIng[2] = {"Strawberries", "Banana"};
string pinaColadaIng[3] = {"Pineapple", "Milk", "Whiskey"};
string mojitoIng[3] = {"Lime", "Mint", "Whiskey"};
string espressoIng[1] = {"CoffeeBeans"};
























