class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
    vector<int> ans;
     unordered_map<int,int>count;
     for(int i=0; i<nums.size(); i++)
     {
        if(count.find(nums[i]) == count.end())
        {
            count.insert({nums[i],1});
        }
        else
            count[nums[i]]++;

     } 
     vector<pair<int,int>>sorted(count.begin(), count.end());
     sort(sorted.begin(), sorted.end(), [] (auto& a, auto& b)
     { return a.second > b.second; });

     for(int i =0; i<k && i<sorted.size(); i++)
     {
          ans.push_back(sorted[i].first);

     }
    return ans;

    }
};
