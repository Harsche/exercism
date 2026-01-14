#include "atbash_cipher.h"
#include <string>
#include <cctype>

namespace atbash_cipher {

    std::string encode (std::string text){
        std::string cipher = "zyxwvutsrqponmlkjihgfedcba";

        std::string output;
        int spaceCount {0};
        
        for(size_t i = 0; i < text.length(); i++){            
            char character = std::tolower(text[i]);

            if(!std::isalnum(static_cast<unsigned char>(character))){ continue; }

            if(spaceCount == 5){
                output.push_back(' ');
                spaceCount = 0;
            }
            
            if(character >= '0' && character <= '9'){
                output.push_back(character);
            }
            else{
                int index = character - 'a';
                int newCharacter = cipher[index];
                output.push_back(newCharacter);
            }

            spaceCount++;
        }

        return output;
    }
    
    std::string decode (std::string text){
        std::string cipher = "abcdefghijklmnopqrstuvwxyz";

        std::string output;

        for(size_t i = 0; i < text.length(); i++){
            char character = std::tolower(text[i]);
            
            if(character == ' '){ continue; }
            
            if(character < 'a'){
                output.push_back(character);
            }
            else{
                int index = 'z' - character;
                int newCharacter = cipher[index];
                output.push_back(newCharacter);
            }
        }

        return output;
    }

}  // namespace atbash_cipher
