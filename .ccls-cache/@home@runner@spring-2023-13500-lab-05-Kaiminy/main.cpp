#include <iostream>


#include "funcs.h"

int main()
{

  std::cout<<"Divisible or not?"<<std::endl;
  std::cout<<isDivisibleBy(30,5)<<std::endl;
  
  std::cout<<"Prime or not?"<<std::endl;
  std::cout<<isPrime(29)<<std::endl;
    
  std::cout<<"Next Prime"<<std::endl;
  std::cout<<nextPrime(18)<<std::endl;

//  std::cout<<"Count Primes"<<std::endl;
  //std::cout<<countPrimes(0,16)<<std::endl;

  std::cout<<"Twin Primes"<<std::endl;
  std::cout<<isTwinPrime(17)<<std::endl;

  std::cout<<"Next Twin Prime"<<std::endl;
  std::cout<<nextTwinPrime(17)<<std::endl;


  std::cout<<"Largest Twin Prime Within range"<<std::endl;
  std::cout<<largestTwinPrime(5,18)<<std::endl;

  return 0;
}
