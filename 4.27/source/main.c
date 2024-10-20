#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int side1, side2, hypotenuse;

    for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++) 
    {
        for (side1 = 1; side1 <= 500; side1++) 
        {
            for (side2 = side1; side2 <= 500; side2++) 
            { 
                if ((side1 * side1) + (side2 * side2) == (hypotenuse * hypotenuse)) 
                {
                    printf("Pythagorean Triple: %d, %d, %d\n", side1, side2, hypotenuse);
                }
            }
        }
    }

    system("pause");
    return 0;
}
