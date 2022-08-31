/*Code for 5 bit Binary addition of two numbers*/
#include <stdio.h>
int main()
{
    int a,b;

    /* Taking input for Binary Numbers and displaying it*/
    printf("Enter first Binary Number: ");
    scanf("%d",&a);
    printf("Enter second Binary Number: ");
    scanf("%d",&b);
    printf("First binary number is: %d \n", a);
    printf("Second binary number is: %d \n", b);
    printf("\n");

    int a1[] = {0,0,0,0,0};
    int b1[] = {0,0,0,0,0};

    /* Function Calling to set binary values in Arrays*/

    ext(a,a1);
    ext(b,b1);

    /* Displaying values Stored in Arrays*/

    printf("\n");
    printf("The array a1 is: ");
    for(int j = 0; j < 5; j++)
    {
        printf("%d", a1[j]);
    }

    printf("\n");
    printf("The array a2 is: ");
    for(int j = 0; j < 5; j++)
    {
        printf("%d", b1[j]);
    }

    printf("\n");

    /* Calculating sum of the Binary Numbers*/
    calc(a1,b1);

}

void ext(int n, int n1[5])
{
    int num = n;
    int i = 4;
    int x1[5] = {0,0,0,0,0};
    while(num != 0)
    {
        x1[i] = num%10;
        num = num/10;
        i--;
    }

    printf("Contents of the array are: ");
    for(int j = 0; j < 5; j++)
    {
        n1[j] = x1[j];
        printf("%d", x1[j]);
    }
    printf("\n");
}

void calc(int u1[5],int u2[5])
{

    int result[] = {0,0,0,0,0};
    int crr[] = {0,0,0,0,0};
    for(int i = 4; i >= 0; i--)
    {
        if(u1[i] == 1)
        {
            if(u2[i] == 1)
            {
                if(crr[i] == 0)
                {
                    result[i] = 0;
                    crr[i-1] = 1;
                }
                else if(crr[i] == 1)
                {
                    result[i] = 1;
                    crr[i-1] = 1;
                }
            }
            else if(u2[i]==0)
            {
                if(crr[i] == 0)
                {
                    result[i] = 1;
                }
                else if(crr[i] == 1)
                {
                    result[i] = 0;
                    result[i-1] = 1;
                }
            }
        }
        else if(u1[i] == 0)
        {
            if(u2[i] == 0)
            {
                if(crr[i] == 0)
                {
                    result[i] = 0;
                }
                else if(crr[i] == 1)
                {
                    result[i] = 1;
                }
            }
            else if(u2[i] == 1)
            {
                if(crr[i] == 0)
                {
                    result[i] = 1;
                }
                else if(crr[i] == 1)
                {
                    result[i] = 0;
                    crr[i-1] = 1;
                }
            }
        }

    }
    int rst[6];
    if(crr[0] == 1)
    {
        if(u1[0] == 1)
        {
            if(u2[0] == 0)
            {
                rst[0] = 1;
            }
            else if(u2[0] == 1)
            {
                rst[0] = 1;
            }
        }
        else if(u1[0] == 0)
        {
            if(u2[0] == 0)
            {
                rst[0] = 0;
            }
            else if(u2[0] == 1)
            {
                rst[0] = 1;
            }
        }
        for(int k = 1; k < 6; k++)
        {
            rst[k] = result[k-1];
        }

        printf("The result in binary is: ");
        for(int p = 0; p < 6; p++)
        {
            printf("%d", rst[p]);
        }
    }
    else if(crr[0] == 0)
    {
        if(u1[0] == 1 && u2[0] == 2)
        {
            rst[0] = 1;
            for(int k = 1; k < 6; k++)
            {
                rst[k] = result[k-1];
            }
        }
        for(int p = 0; p < 5; p++)
        {
            printf("%d", result[p]);
        }

    }

}

