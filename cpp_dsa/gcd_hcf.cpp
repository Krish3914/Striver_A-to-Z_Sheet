int calcGCD(int n, int m)
{
    // Write your code here.
    int mi = min(n, m);
    vector<int> arr;
    for (int i = 1; i <= mi / 2; i++)
    {
        if (mi % i == 0)
        {
            arr.push_back(i);
        }
    }
    arr.push_back(mi);
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (n % arr[i] == 0 && m % arr[i] == 0)
        {
            return arr[i];
        }
    }
    return 1;
}