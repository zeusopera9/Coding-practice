#include<stdio.h>
int main()
{
	//initialising and taking input from User
	int n1, n2, i;
	printf("Enter first Number: ");
	scanf("%d", &n1);
	printf("Enter second Number: ");
	scanf("%d", &n2);
	
	//Converting decimal to Binary
	int a[] = {0,0,0,0,0};
	int b[11] = {0,0,0,0,0};
	int n1_o = n1;
	int n2_o = n2;
	for(int i = 4; n1_o > 0; i--)
	{
		a[i] = n1_o % 2;
		n1_o = n1_o / 2;
	}
	
	
	for(int i = 4; n2_o > 0; i--)
	{
		b[i] = n2_o % 2;
		n2_o = n2_o / 2;
	}
	
	//printing the binary number
	printf("The first binary number is: ");
	for(int i = 0 ; i < 5; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	
	printf("The second binary number is: ");
	for(int i = 0 ; i < 5; i++)
	{
		printf("%d", b[i]);
	}
	
	add(a,b);
	shift()
	
	
	
	
}

int add(int a[],int b[])
{
    int carry=0;
    int z[5];
    int temp;
    
    for(int i = 4; i >= 0; i--)
    {
        temp = a[i] + b[i] + carry;
        carry = 0;
        if(temp == 2)
        {
            carry = 1;
            temp = 0;
        }
        else if(temp == 3)
        {
            carry = 1;
            temp = 1;
        }
        z[i] = temp;
    }
    
    printf("\n");
    printf("The result is: ");
    for(int j = 0; j <5; j++)
    {
        printf("%d", z[j]);
    }
    return z;
}

int calc()
{
    int c[] = {0,0,0,0,0,0,0,0,0,0,0};
    
    /*
    c=[0,0,0,0,0]+b+[0]
print(c)
for i in range(0,5):
    if(c[-1]>c[-2]):
        c=add(c[0:5],a)+c[5:]
    if(c[-1]<c[-2]):
       c=add(c[0:5],a_)+c[5:]
    c=shift_right(c)
    print(c)
c=c[5:-1]
print(c)*/
    
}

int compliment(int x[5])
{
    for(int i = 0; i < 5; i++) 
    {
        if(x[i] == 0)
        {
            x[i] = 1;
        }
        else if(x[i] == 1)
        {
            x[i] = 0;
        }
        
    }
    int p[] = {0,0,0,0,1};
    add(x,p);
}

int shift(int u[11])
{
    int y[] = {0,0,0,0,0,0,0,0,0,0,0};
    y[0] = u[0];
    for(int i = 1; i < 10; i++)
    {
        y[i] = u[i+1];
    }
}

