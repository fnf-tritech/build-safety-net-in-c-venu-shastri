#include "Soundex.h"
#include <ctype.h>
#include <string.h>

int isEmpty(const char* inputString){
return strlen(inputString) == 0;
}

void generateSoundexCode(const char* inputString, char* soudexCode){
   if(isEmpty(inputString)) {
        strcpy(soudexCode,"\0");
   }
}
