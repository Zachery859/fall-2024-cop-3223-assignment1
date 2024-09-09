//********************************************************
// fracturing.c
// Author: Zachery Rodriguez
// Date: 9/8/2024
// Class: COP 3223, Professor Parra
// Purpose: To calculate Distance, Area, Perimeter, Width
// and Height from users input
// 
// Input: User's age, height, and grade
// Output: User's age, heigt, and grade
// Output: (to the command line) A brief Message
// //*******************************************************

    #include <stdio.h> 
    #include <math.h>
    #define PI 3.14159

    int main(int argc, char **argv)
    {
        return 0;
    }

    double calculateWidth()
    {
        // Defines variables for the function
        int x1; 
        int x2;
        int y1;
        int y2;

        int width = 0;
        
        // Gets user inputs for x and y values for points
        scanf("%d", &x1);  
        scanf("%d", &x2);
        scanf("%d", &y1);
        scanf("%d", &y2);

        // Tells user what they inputed
        printf("Point #1 entered: x1 = %d; y1 = %d\n", x1, y1);
        printf("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);

        width = x2 - x1;

        printf("The width of the city encompassed by your request is %d\n", width);

        return 1.0;
    }

    double calculateHeight()
    {
        // Defines variables for the function
        int x1;
        int x2;
        int y1;
        int y2;

        int height = 0;

        // Gets user inputs for x and y values for points
        scanf("%d", &x1);  
        scanf("%d", &x2);
        scanf("%d", &y1);
        scanf("%d", &y2);

        // Tells user what they inputed
        printf("Point #1 entered: x1 = %d; y1 = %d\n", x1, y1);
        printf("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);

        height = y2 - y1;

        printf("The height of the city encompassed by your request is %d\n", height);

        return 1.0;

    }

    double calculateDistance() 
    {
        // Defines variables for the function
        int x1;
        int x2;
        int y1;
        int y2;

        // Gets user inputs for x and y values for points
        scanf("%d", &x1);  
        scanf("%d", &x2);
        scanf("%d", &y1);
        scanf("%d", &y2);

        // Tells user what they inputed
        printf("Point #1 entered: x1 = %d; y1 = %d\n", x1, y1);
        printf("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);

        // Gets the diameter
        double distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1))); 

        printf("The distance between the two points is %f\n", distance);

        return distance;
    }

    double calculatePerimeter() 
    {
        // Gets the circumference/perimeter of the city
        double Perimeter = PI * calculateDistance();

        printf("The perimeter of the city encompassed by your request is %f\n", Perimeter);

        return 2.0;
    }

    double calculateArea()
    {
        double area = 0; // Defines area 

        // Gets the area of the city
        area = PI * calculateDistance() * calculateDistance() / 4;

        printf("The area of the city encompassed by your request is %f\n", area);

        return 2.0;
    }
