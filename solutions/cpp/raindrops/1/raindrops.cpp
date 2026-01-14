#include "raindrops.h"
#include <string>

namespace raindrops {

    std::string convert(int number){
        bool isDivisibleBy3 = number % 3 == 0;
        bool isDivisibleBy5 = number % 5 == 0;
        bool isDivisibleBy7 = number % 7 == 0;

        std::string output;

        if(isDivisibleBy3){ output += "Pling"; }
        if(isDivisibleBy5){ output += "Plang"; }
        if(isDivisibleBy7){ output += "Plong"; }

        return output.empty() ? std::to_string(number) : output;
    }

}  // namespace raindrops
