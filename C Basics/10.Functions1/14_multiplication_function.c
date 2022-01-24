int addTwo(int digit, int power)

{
    int sum = digit;
    for (int i = 1; i < power ; i++)
    {
        sum = multiplication(digit);
        digit = sum;
    }
    return sum;

}

int multiplication (int x)
{
    int sum = 0;
    for (int i = 1; i < x; i++)
    {
        sum = sum + x;
    }
    return sum;
}