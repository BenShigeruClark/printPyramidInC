#include <stdio.h>

int main()
{
    //variable declaration
  int row, c, n, s;
// prints a prompt entry
  printf("Enter the number of Rows in your pyramid: \n");
  // takes in you entry number
  scanf("%d", &n);
    // s variable now assigned value of n entry
  s = n;
   
   // loops through entry number starting at value 1
    for (row = 1; row <= n; row++)
    {
        // loops through inside previous loop to assigning space value to c and s variables
        for (c = 1; c < s; c++)
        printf(" ");
        // prints equal space for c and s variables
        s--;
        // loops through and prints asterik* for number entered and loops through starting 
        // at 1 and creates a new line until enterd value is reached
        for (c = 1; c <= 2 * row - 1; c++)
        printf("*");
        printf("\n");
    }

    return 0;
  
}