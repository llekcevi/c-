/* 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {3, 2, 4};

    int target = 6;
    std::vector<int> result;
    int size = nums.size();

    for (int i = 0; i < size; i++)
    {
        auto number1 = target - nums[i];
        auto number2 = find(nums.begin(), nums.end(), number1);
        auto number2_index = std::distance(nums.begin(), number2);

        if (number2 != nums.end() && i != number2_index)
        {
            std::cout << "first number:" << nums[i] << "|"
                      << "index of first number:" << i << std::endl;
            std::cout << "first number:" << *number2 << "|"
                      << "index of first number:" << number2_index << std::endl;

            result.push_back(i);
            result.push_back(number2_index);
            std::cout << result[0] << " " << result[1] << std::endl;
            break;
        }
    }

    return 0;
}