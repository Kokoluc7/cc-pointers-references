#include<iostream>
#include<string>

//blueprints

int Add(int& a, int& b);

int main()
{
  int number1{};
  int number2{6};
  int& number1Ref{number1};

  int* pointer = &number1;

  int numbersArr[]{1, 5, 4, 9};
  int* numPointerArr{new int[4]{1, 5, 4, 6}};
  /*float myFloat;
  const char* pointerString{"hello"};
  char charString[]{"world"};
  std::string stlString{"hello world!!!!"};*/

  std::cout << "Pointers n References: " << std::endl;
  std::cout << std::endl;

  for(int i{}; i < 4; i++)
  {
    std::cout << *(numPointerArr + i) << std::endl;
  }

  std::cout << "pointer inside var memory: " << numPointerArr;
  std::cout << std::endl;
  for(int i{}; i < 4; i++)
  {
    std::cout << numPointerArr + i << std::endl;
  }

  /*std::cout << "number1 var value " << number1 << std::endl;
  std::cout << "number1 memory " << &number1 << std::endl;
  std::cout << "pointer variable inside memory " << pointer << std::endl;
  std::cout << "pointer variable inside value " << *pointer << std::endl;
  std::cout << "pointer memory " << &pointer << std::endl;
  std::cout << std::endl;

  std::cout << "number1 var value " << number1 << std::endl;
  std::cout << "number1 memory " << &number1 << std::endl;
  std::cout << "pointer variable inside memory " << pointer << std::endl;
  std::cout << "pointer variable inside value " << *pointer << std::endl;
  std::cout << "pointer memory " << &pointer << std::endl;
  std::cout << std::endl;*/

  /*std::cout << "number1 var value " << number1 << std::endl;
  std::cout << "number1 var value " << &number1 << std::endl;
  std::cout << "number2 var value " << number2 << std::endl;
  std::cout << "number2 var value " << &number2 << std::endl;
  std::cout << std::endl;

  std::cout << "Reference number1: " << number1Ref << std::endl;
  std::cout << "Reference number1: " << &number1Ref << std::endl;
  number1Ref = number2;
  std::cout << std::endl;

  std::cout << "number1 var value " << number1 << std::endl;
  std::cout << "number1 var value " << &number1 << std::endl;
  std::cout << "number2 var value " << number2 << std::endl;
  std::cout << "number2 var value " << &number2 << std::endl;
  std::cout << std::endl;

  std::cout << "Reference number1: " << number1Ref << std::endl;
  std::cout << "Reference number1: " << &number1Ref << std::endl;*/

  //std::cout << "Standar C++ string object size: " << sizeof(stlString) << std::endl;
  //std::cout << "Char pointer var size: " << sizeof(pointerString) << std::endl;
  //std::cout << "Char string car size: " << sizeof(charString) << std::endl;

  /*std::cout << "number1 var value " << number1 << std::endl;
  std::cout << "number1 var value " << &number1 << std::endl;
  std::cout << "number2 var value " << number2 << std::endl;
  std::cout << "number2 var value " << &number2 << std::endl;
  std::cout << std::endl;
  number2 = number1;
  number2++;
  std::cout << "number1 var value " << number1 << std::endl;
  std::cout << "number1 var value " << &number1 << std::endl;
  std::cout << "number2 var value " << number2 << std::endl;
  std::cout << "number2 var value " << &number2 << std::endl;
  std::cout << std::endl;

  std::cout << "Reference number1: " << number1Ref << std::endl;
  std::cout << "Reference number1: " << &number1Ref << std::endl;
  number1Ref++;
  std::cout << "Reference number1: " << number1Ref << std::endl;
  std::cout << "number1 var value " << number1 << std::endl;
  number1++;
  std::cout << "Reference number1: " << number1Ref << std::endl;
  std::cout << "number1 var value " << number1 << std::endl;*/

  /*std::cout << "number1 var value " << number1 << std::endl;
  std::cout << "number1 var value " << &number1 << std::endl;
  std::cout << "number2 var value " << number2 << std::endl;
  std::cout << "number2 var value " << &number2 << std::endl;
  std::cout << std::endl;

  std::cout << "Suma: " << Add(number1, number2) << std::endl;
  std::cout << std::endl;

  std::cout << "number1 var value " << number1 << std::endl;
  std::cout << "number1 var value " << &number1 << std::endl;
  std::cout << "number2 var value " << number2 << std::endl;
  std::cout << "number2 var value " << &number2 << std::endl;*/

  /*for(int i{}; i < 4; i++)
  {
    std::cout << &numbersArr[i] << std::endl;
  }

  std::cout << std::endl;

  for(int n : numbersArr)
  {
    std::cout << &n << std::endl;
  }

  std::cout << std::endl;

  for(int& n : numbersArr)
  {
    std::cout << &n << std::endl;
  }*/

  std::cin.get();
  return 0;
}

/*int Add(int a, int b)
{
  std::cout << "a memory: " << &a << " " << "b memory: " << &b << std::endl;
  return a + b;
}*/

int Add(int& a, int& b)
{
  std::cout << "a memory: " << &a << " " << "b memory: " << &b << std::endl;
  //a++;
  return a + b;
}