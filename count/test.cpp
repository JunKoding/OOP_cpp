#include <iostream>
#include <string>
#include <vector>


int main() {

    std::string str;
    std::string separator = " ";
    int cur_position = 0;
    int position;
    std::vector<std::string> v;
    int count = 0;

    getline(std::cin, str);

    while ((position = str.find(separator, cur_position)) != std::string::npos) {
        int len = position - cur_position;
        std::string result = str.substr(cur_position, len);
        //std::cout << result << std::endl;
        cur_position = position + 1;

        v.push_back(result);
    }

    std::string result = str.substr(cur_position);
    v.push_back(result);

    for(const auto& e : v) {
      std::cout << e << std::endl;
      count ++;
    }

    std::cout << count << std::endl;
}
