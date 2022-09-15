import java.util.Scanner;

//Restoring division algorithm for unsigned Integer

class calc
{

    int i = 0;
    int j = 0;
    int dividend;
    int divisor;

    int dvd[] = new int[10];
    int dvs[] = new int[10];

    calc(int a, int b)
    {
        dividend = a;
        divisor = b;
    }
    calc()
    {
        dividend = 0;
        divisor = 0;
    }
    void d2b()
    {
        int decimal1 = dividend;
        int decimal2 = divisor;

        while(decimal1 > 0)
        {
            dvd[i] = decimal1 % 2;
            decimal1 = decimal1 / 2;
            i++;
        }
        while(decimal2 > 0)
        {
            dvs[j] = decimal2 % 2;
            decimal2 = decimal2 / 2;
            j++;
        }
    }
    int[] r_dvd()
    {
        return dvd;
    }

}

class div
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int n = 0;

        int dvd = 0;
        int dvs =0;

        System.out.println("Enter Dividend: ");
        dvd = sc.nextInt();

        System.out.println("Enter Divisor: ");
        dvs = sc.nextInt();

        calc c1 = new calc(dvd, dvs);

    }
}
