#include<stdio.h>


void sum(double p, double q, double r, double s)
{
    double real = p + r;
    double img = q + s;
    
    if(img < 0)
    {
        printf("The sum of the complex numbers is: %f  %f i", real, img);
    }
    else
    {
        printf("The sum of the complex numbers is: %f + %f i ", real, img);
    }
}

void sub(double p, double q, double r, double s)
{
    double real = p - r;
    double img = q - s;
    
    if(img < 0)
    {
        printf("The sum of the complex numbers is: %f %f i", real, img);
    }
    else
    {
        printf("The sum of the complex numbers is: %f + %f i ", real, img);
    }
}

void multiply(double p, double q, double r, double s)
{
    double real = (p * r) - (q * s);
    double img = (p * s) + (q * r);
    if(img < 0)
    {
        printf("The product of the complex numbers is: %f %f i", real, img);
    }
    else
    {
        printf("The product of the complex numbers is: %f + %f i ", real, img);
    }
}

void div(double p, double q, double r, double s)
{
    double real = ((p * r) + (q * s))/((r * r) + (s * s));
    double img = ((q * r) - (p * s))/((r * r) + (s * s));
    if(img < 0)
    {
        printf("The division of the complex numbers is: %f %f i", real, img);
    }
    else
    {
        printf("The division of the complex numbers is: %f + %f i ", real, img);
    }
}


int main()
{
    //Get two complex numbers to be added
    
    double a,b;
    
    printf("Enter Real Part of First Number: ");
    scanf("%f", &a);
    
    printf("Enter Imaginary Part of First Number: ");
    scanf("%f", &b);
    
    //Storing values for Complex Number
    double r1 = a;
    double i1 = b;
    
    
    printf("Enter Real Part of Second Number: ");
    scanf("%f", &a);
    
    printf("Enter Imaginary Part of Second Number: ");
    scanf("%f", &b);
    
    //Storing values for Complex Number
    double r2 = a;
    double i2 = b;
    
    int choice = 0;
    printf("Program to offer the following functionalities: \n");
    printf("1. To add two complex numbers \n");
    printf("2. To subtract two complex numbers \n");
    printf("3. To multiply two complex numbers \n");
    printf("4. To divide two complex numbers \n");
    printf("Enter choice: \n");
    scanf("%d", &choice);
    
    if(choice == 1)
    {
        sum(r1, i1, r2, i2);
    }
    else if(choice == 2)
    {
        sub(r1, i1, r2, i2);
    }
    else if(choice == 3)
    {
        multiply(r1, i1, r2, i2);
    }
    else if(choice == 4)
    {
        div(r1, i1, r2, i2);
    }
    
}
