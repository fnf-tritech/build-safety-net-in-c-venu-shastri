#include <gtest/gtest.h>
#include "Soundex.h"

TEST(SoudexTestSuite,generateSoudexCode_ReturnsEmptyStringForEmptyStringInput){

      char soundexCode[5];
      generateSoundexCode("",soundexCode);
      EXPECT_EQ(strcmp(soundexCode,""),0);
}
