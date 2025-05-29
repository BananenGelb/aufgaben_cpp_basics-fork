#include "guide.h"

namespace guide {
std::pair<std::string, int> get_place_info(
    std::vector<std::string> places, std::vector<std::string> descriptions,
    std::vector<int> entry_fees, std::string place) {
  // TODO
  for (int i = 0; i < places.size(); i++){
    if (places.at(i) == place){
      return std::make_pair(descriptions.at(i), entry_fees.at(i));
    }
  }
  return std::make_pair("", -1);
}
}  // namespace guide
