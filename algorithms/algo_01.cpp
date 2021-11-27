#include <iostream>
#include <stdbool.h>
#include <vector>

#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> _map;
        for(int i = 0; i <nums.size();i++)
        {
            int num = nums[i];
            int complement = target - num;
            auto it = _map.find(complement);
            if(it != _map.end())
            {
                return {it->second,i};
            }
            _map[num] = i;
        }

        return {};
    }
    


};


int main()
{  
    vector <int> zahl;
    zahl.push_back(2);
    zahl.push_back(4);
    zahl.push_back(5);
    zahl.push_back(3);

    Solution s1;
    s1.twoSum(zahl,7);


    return 0;
}