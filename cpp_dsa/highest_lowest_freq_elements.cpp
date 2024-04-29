vector<int> getFrequencies(vector<int> &v)
{
    // Write Your Code Here
    int i, j;
    int n = v.size();
    unordered_map<int, int> mp;
    for (i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    // for(auto k:mp){
    //     cout<<k.first<<"->"<<k.second<<endl;
    // }
    int mi = INT_MAX;
    int ma = INT_MAX;
    int mn = INT_MAX;
    int mx = INT_MIN;
    for (auto k : mp)
    {
        mn = min(mn, k.second);
        mx = max(mx, k.second);
    }
    // cout<<mn<<" "<<mx<<endl;
    vector<int> ans;
    for (auto k : mp)
    {
        if (k.second == mn)
        {
            mi = min(mi, k.first);
        }
        if (k.second == mx)
        {
            ma = min(ma, k.first);
        }
    }
    ans.push_back(ma);
    ans.push_back(mi);
    // sort(ans.begin(),ans.end());
    return ans;
}