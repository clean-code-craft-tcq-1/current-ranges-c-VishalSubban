#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "BMSCurrentRange.h"

TEST_CASE("To check if total current samples out of range") {
    int BMSCurrentRange[] = {40,55,68,73,95,32};
    int numofSamples = sizeof(BMSCurrentRange) / sizeof(BMSCurrentRange[0]);
    int currentRange[] ={1,5};
  REQUIRE(BMSCurrent_InRange(numofSamples,BMSCurrentRange,currentRange) == 5);
}

TEST_CASE("To check if total current samples are in range") {
    int BMSCurrentRange[] = {3, 3, 5, 4, 10, 11, 12};
    int numofSamples = sizeof(BMSCurrentRange) / sizeof(BMSCurrentRange[0]);
    int currentRange[] ={1,5};
  REQUIRE(BMSCurrent_InRange(numofSamples,BMSCurrentRange,currentRange) == 5);
}