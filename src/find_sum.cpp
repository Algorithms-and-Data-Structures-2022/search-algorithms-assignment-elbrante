#include "assignment/find_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> find_sum(const std::vector<int>& data, int sum) {

    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int left = 0;
    int right = static_cast<int>(data.size()) - 1;
    while (right >= left) {
      if (data[left] + data[right] == sum) {
        return std::make_pair(left, right);
      }
      if (data[left] + data[right] < sum) {
        left += 1;
      }
      if (data[left] + data[right] > sum) {
        right -= 1;
      }
    }
    return std::nullopt;
  }

}  // namespace assignment