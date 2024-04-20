long long factorial(long long n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
void facto(long long n, vector<long long> &ans)
{
    for (long long i = 1; i <= n; i++)
    {
        if (factorial(i) <= n)
        {
            ans.push_back(factorial(i));
        }
        else
        {
            return;
        }
    }
    return;
}
vector<long long> factorialNumbers(long long n)
{
    // Write Your Code Here
    vector<long long> ans;
    facto(n, ans);
    return ans;
}