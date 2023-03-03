#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

TEST_CASE("Divisible") {
  CHECK(isDivisibleBy(25,5) == true);
  CHECK(isDivisibleBy(19,4) == false);
}

TEST_CASE("Prime Numbers") {
  CHECK(isPrime(12) == false);
  CHECK(isPrime(3) == true);
  CHECK(isPrime(9) == false);


TEST_CASE("Next Prime Number") {
  CHECK(nextPrime(17) == 19);
  CHECK(nextPrime(14) == 17);
}

TEST_CASE(" The Twin Primes") {
  CHECK(isTwinPrime(17) == true);
}
 
TEST_CASE("Next twin prime") {
  CHECK(nextTwinPrime(1)==3);
}

TEST_CASE("Largest twin prime in range") {
  CHECK(largestTwinPrime(1,10)==7;)
}

}



