//sebin sebastian
//24/02/2022
//WAP to count the bits set 
//(bit value 1) in an integer? Find out and compare different possibilities?

int main()
{
    int x = 10, y = 0;

    while (x)
    {
        x = x & (x - 1);
        y++;
    }
    return 0;
}