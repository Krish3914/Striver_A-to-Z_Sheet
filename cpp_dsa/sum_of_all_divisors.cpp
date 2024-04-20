int sumOfAllDivisors(int n)
{
    // Write your code here.
    if (n == 0)
    {
        return 0;
    }
    int sum = 0;
    while (n > 0)
    {
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        sum += n;
        n--;
    }
    return sum;
}