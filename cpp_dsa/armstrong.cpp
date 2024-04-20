bool checkArmstrong(int n)
{
    // Write your code here
    if (n == 0)
    {
        return true;
    }
    if (n < 0)
    {
        n *= (-1);
    }
    long long sum = 0;
    int m = n;
    int c = 0;
    while (m > 0)
    {
        c++;
        m /= 10;
    }
    m = n;
    while (m > 0)
    {
        int num = m % 10;
        sum += pow(num, c);
        m /= 10;
    }
    return sum == n;
}
