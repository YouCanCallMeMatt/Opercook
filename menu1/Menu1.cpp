#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "GET_NAME_PRICE.h"

void addDessert()
{



  inputName();
  inputPrice();

  int totaltime; // unstored
  int extratime; // unstored

  // Input Topping
  char topping[20]; // unstored
  int validated = 0;
  do
  {
    printf("Input the topping [\'Caramel\' | \'Honey\' | \'Syrup\'](Case Sensitive): ");
    scanf("%[^\n]", &topping);
    getchar();
    if (strcmp(topping, "Caramel") == 0)
    {
      validated = 1;
      extratime = 10;
    }
    else if (strcmp(topping, "Honey") == 0)
    {
      validated = 1;
      extratime = 15;
    }
    else if (strcmp(topping, "Syrup") == 0)
    {
      validated = 1;
      extratime = 20;
    }
  } while (validated == 0);

  // Input Calories
  double calories; // unstored
  validated = 0;
  do
  {
    printf("Insert calories [1.00 - 99.00]: ");
    scanf("%lf", &calories);
    getchar();
    if (calories >= 1.00 && calories <= 99.00)
    {
      validated = 1;
    }
  } while (validated == 0);

  // Time
  // srand(time(0));
  totaltime = ((rand() % (90 - 50 + 1)) + 50) + extratime;

  printf("\nSuccessfully added a new menu!\n");
  getchar();
  getchar();
}
