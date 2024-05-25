//Dutch National Flag Algorithm is used to sort the array in an optimal Manner

//3-Pointers approach
static const int __ = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    return 0;
}();
class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int i, j;
        int n = nums.size();

        // Dutch National Flag Algorithm
        int low, mid, high;
        for (i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                continue;
            }
            else
            {
                mid = i;
                low = mid - 1;
                break;
            }
        }
        for (i = n - 1; i >= 0; i--)
        {
            if (nums[i] == 2)
            {
                continue;
            }
            else
            {
                high = i;
                break;
            }
        }
        cout << low << " " << mid << " " << high << " " << endl;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[mid], nums[low + 1]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[mid], nums[high]);
                high--;
            }
        }

        // bubble sort
        //  int s = 0;
        //  int e = n-1;
        //  while(e>0){
        //      for(s=0;s<=e-1; s++){
        //          if(nums[e]<nums[s]){
        //              swap(nums[s],nums[e]);
        //          }
        //      }
        //      e--;
        //  }
    }
};