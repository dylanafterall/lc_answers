#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    // map key = input vector element
    // map value = associated input vector index
    std::unordered_map<int, int> numMap;

    // loop through input vector
    for (int i = 0; i < nums.size(); ++i) {
        // if there already exists a value 'diff' in hash map, such that: diff = target - current
        if (const auto diff = numMap.find(target - nums[i]); diff != numMap.cend()) {
            // then return a vector where:
            //  first element is value (input vector index) assigned to complementary key in the map
            //  second element is the current input vector index
            return {diff->second, i};
        }
        // if no solution pair found, add:
        //  current input vector element as new map key
        //  current input vector index as that key's value
        numMap[nums[i]] = i;
    }

    throw std::runtime_error("twoSum() failed to identify solution pair");
}