//gcd(a,b)  = gcd(a-b,b);  given(a>b)

int calcGCD(int n, int m)
{
    // Write your code here.
    if (min(n, m) == 0)
    {
        return max(n, m);
    }
    int ans;
    ans = calcGCD(max(n, m) % min(n, m), min(n, m));
    return ans;
}