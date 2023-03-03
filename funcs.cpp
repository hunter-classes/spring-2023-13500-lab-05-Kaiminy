#include <iostream>
#include "funcs.h"

// add functions here

bool isDivisibleBy(int n, int d){
  if ( n % d ==0){
    return true;
  }
  else {
    return false;
  }
}

bool isPrime(int n){
  if (n<= 1){
    return false;
  }
  for (int i =2;i<n;i++){
    if (n%i==0){
      return false;
    }
  }
  return true;
  }


int nextPrime(int n){
  int nextPrime=n;
  bool found = false;
  while(!found){
    nextPrime++;
    if (isPrime(nextPrime)){
      found = true;
    }
  }
  return nextPrime;
}
//doesn't work recheck
//recheck funcs.h as well
//finish testcases
int countPrimes(int a, int b){
  
  int num=0;
  for(int i=a;i<=b;i++)
    //ends b
  {
    if(isPrime(i)==true){
      num++;
    }
   
  }
  return num;
}

//task e

bool isTwinPrime(int n);
bool isTwinPrime(int n){
  if(isPrime(n)&& isPrime(n-2)||isPrime(n+2)){
    return true;
  }
  return false;
  
}

int nextTwinPrime(int n){
  int num=n+1;
  while(!isTwinPrime(num)){
    num++;
  }
  return num;
}


int largestTwinPrime(int a, int b){
  int large=-1;
  for (int i=a;i<=b;i++){
   
     if(isTwinPrime(i)==true){
      large=i;
      }
    }
    return large;
}



