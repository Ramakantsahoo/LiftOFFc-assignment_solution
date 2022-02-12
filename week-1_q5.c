
#include<stdio.h>

int main(){
    float radius, diameter, circumfarence, area;

    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);

    diameter = 2*radius;
    circumfarence = 3.14159*diameter; //value of pie is taken as 3.14159
    area = 3.14159*radius*radius;

    printf("The input Radius of the Circle is : %f\n", radius);
    printf("The Diameter of the Circle is : %f\n",diameter);
    printf("The Circumfarence of the Circle is : %f\n", circumfarence);
    printf("The Area of the Circle is : %f\n", area);

    return 0;
}
