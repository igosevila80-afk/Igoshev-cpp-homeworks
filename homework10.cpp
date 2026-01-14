#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(const vector<int>& nums, int target) {
    unordered_map<int, int> num_to_index; // число -> индекс
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (num_to_index.count(complement)) {
            return {num_to_index[complement], i};
        }
        num_to_index[nums[i]] = i;
    }
    return {}; // если не найдено
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Индексы: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "Пар не найдено" << endl;
    }

    return 0;
}
