/******************
Name:Yoav Rachlweski
ID:327695169
Assignment:1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  printf("Please enter a number:\n");
  int num;
  scanf("%d", &num);
  printf("Please enter a position:\n");
  int position;
  scanf("%d", &position);
  int shifted = num >> position;
  int res = shifted & 1;
  printf("The bit in position %d is: %d\n", position, res);

  // Set bit
  printf("\nSet bit:\n");
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  int mask1 = (1 << position);
  int mask0 = (~mask1);
  printf("Number with bit %d set to 1: %d\n", position,(mask1 | num));
  printf("Number with bit %d set to 0: %d\n", position,(mask0 & num));

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  int togMask = (1 << position);
  printf("Number with bit %d toggled: %d\n",position,(num ^ togMask));

  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:\n");
  scanf("%d", &num);
  printf("%d\n",(num & 1));
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  printf("Please enter the first number (octal):\n");
  int firstO;
  scanf("%o", &firstO);
  printf("Please enter the second number (octal):\n");
  int secondO;
  scanf("%o", &secondO);
  int sum = firstO + secondO;
  printf("The sum in hexadecimal: %X\n",sum);
  int bit3 = (sum >> 3)&1;
  int bit5 = (sum >> 5)&1;
  int bit7 = (sum >> 7)&1;
  int bit11 = (sum >> 11)&1;
  printf("The 3,5,7,11 bits are: %d%d%d%d\n",bit3,bit5,bit7,bit11);



  printf("Bye!\n");
  
  return 0;
}
