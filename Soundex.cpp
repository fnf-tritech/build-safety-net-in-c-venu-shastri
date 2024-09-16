#include "Soundex.h"
#include <ctype.h>
#include <string.h>
void generateSoundexCode(const char* inputString, char* soudexCode){
   if(strlen(inputString) == 0) {
        strcpy(soudexCode,"\0");
   }
}
