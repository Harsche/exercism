#include <string>
#include "reverse_string.h"

namespace reverse_string {

    std::string reverse_string(std::string original_string){
        std::string new_string {original_string};
        int size = original_string.size();
        
        for(int i {0}; i < size; i++){
            new_string[i] = original_string[size - 1 - i];
        }

        return new_string;
    }
    
}  // namespace reverse_string
