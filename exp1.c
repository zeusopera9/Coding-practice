#include<stdio.h>


void sum(int p, int q, int r, int s)
{
    int real = p + r;
    int img = q + s;
    
    if(img < 0)
    {
        printf("The sum of the complex numbers is: %d  %d i", real, img);
    }
    else
    {
        printf("The sum of the complex numbers is: %d + %d i ", real, img);
    }
}

void sub(int p, int q, int r, int s)
{
    int real = p - r;
    int img = q - s;
    
    if(img < 0)
    {
        printf("The sum of the complex numbers is: %d %d i", real, img);
    }
    else
    {
        printf("The sum of the complex numbers is: %d + %d i ", real, img);
    }
}

void multiply(int p, int q, int r, int s)
{
    int real = (p * r) - (q * s);
    int img = (p * s) + (q * r);
    if(img < 0)
    {
        printf("The product of the complex numbers is: %d %d i", real, img);
    }
    else
    {
        printf("The product of the complex numbers is: %d + %d i ", real, img);
    }
}

void div(int p, int q, int r, int s)
{
    int real = ((p * r) + (q * s))/((r * r) + (s * s));
    int img = ((q * r) - (p * s))/((r * r) + (s * s));
    if(img < 0)
    {
        printf("The division of the complex numbers is: %d %d i", real, img);
    }
    else
    {
        printf("The division of the complex numbers is: %d + %d i ", real, img);
    }
}


int main()
{
    //Get two complex numbers to be added
    
    int a,b;
    
    printf("Enter Real Part of First Number: ");
    scanf("%d", &a);
    
    printf("Enter Imaginary Part of First Number: ");
    scanf("%d", &b);
    
    //Storing values for Complex Number
    int r1 = a;
    int i1 = b;
    
    
    printf("Enter Real Part of Second Number: ");
    scanf("%d", &a);
    
    printf("Enter Imaginary Part of Second Number: ");
    scanf("%d", &b);
    
    //Storing values for Complex Number
    int r2 = a;
    int i2 = b;
    
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
