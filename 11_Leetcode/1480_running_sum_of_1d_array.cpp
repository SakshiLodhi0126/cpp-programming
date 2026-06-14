#include <iostream>
#include <vector>

using namespace std;

vector<int> runningSum(vector<int>& nums) {

    vector<int> result;
    int sum = 0;

    for(int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        result.push_back(sum);
    }

    return result;
}

int main() {

    vector<int> nums = {1, 2, 3, 4};

    vector<int> answer = runningSum(nums);

    cout << "Running Sum: ";

    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }

    return 0;
}