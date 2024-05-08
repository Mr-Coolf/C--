#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

// typedef std::string string_t;
// typedef int number_t;

using string_t = std::string;
using number_t = int;


int main(int argc, char const *argv[])
{
    // pairlist_t pairlist;

    string_t firstName = "Giorno";
    number_t age = 21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}
