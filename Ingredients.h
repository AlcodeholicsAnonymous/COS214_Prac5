#include <string.h>

typedef struct ingredient {
	char name[20];
	int price;
	int category;
	int prepMin;
	int prepMax;
	int prepMethod;
} Ingredient;