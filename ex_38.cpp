#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
    
    std::vector<int> list1 = {1, 3, 2};
    std::vector<int> list2 = {4, 3, 2};

    
    std::set<int> set1(list1.begin(), list1.end());
    std::set<int> set2(list2.begin(), list2.end());

    
    std::vector<int> result;

    
    std::set_intersection(set1.begin(), set1.end(),
                          set2.begin(), set2.end(),
                          std::back_inserter(result));

    
    for (int num : result) {
        std::cout << num << " ";
    }

    return 0;
}
