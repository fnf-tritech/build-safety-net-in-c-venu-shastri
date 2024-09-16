#include <gtest/gtest.h>

TEST(SoudexTestSuite,generateSoudexCode_ReturnsEmptyStringForEmptyStringInput){

      char soudexCode[5];
      generateSoudexCode("",soundexCode);
      EXPECT_EQ(strcmp(sounexCode,"")==0));
}
