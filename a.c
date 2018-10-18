#include "stdio.h"

int stepSize = 1;

int main()

{

    float r, area;

    printf("Please input radius: \n");

    scanf("%f",&r);

    area = r*r*3.14;

    printf("area = %.2f \n",area);

    return 0;

}
