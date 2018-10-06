#include <iostream>
#include <string>

//Help! Bug in line 58 - no idea how to do it properly.
//Trying to convert user's character into int so it
//can be used for the array

int main()
{
// std::cout <<"Hello World! \n";
// int a{1};
// a = 30;
// std::cout << a << std::endl;
//
// double b{1.5};
// std::cout << b << std::endl;
// double c{1.0};
// std::cout << c << std::endl;
// c = a * b;
// std::cout << c << std::endl;
// const double d{10};
// std::cout << d << std::endl;
// int e{5};
// std::cout << e << std::endl;
// std::string msg {"Hello!"};
// std::cout << msg << "\n";
//
// const double f{5};
// const int g{6};
// const int h{13};
//
// std::cout << f * g <<std::endl;
// std::cout << g / f <<std::endl;
// std::cout << f / g <<std::endl;
// std::cout << h / g <<std::endl;
//
// std:: string msg2 {"Porcupine"};
// char i{msg2[4]};
// std::cout << i <<std::endl;

std::string fin{""};
char in_char{'x'};
int index{-1};
std::string numbers[10] =
{"zero", "one", "two", "three", "four", "five", "six",
"seven", "eight", "nine" };

while(std::cin >> in_char)
  {
    if (isalpha(in_char))
    {
       fin += (toupper(in_char));
    }
    else if (isdigit(in_char))
    {
      //switch (in_char)
      //{
      int num{in_char};  //something wrong with this line
      std::string word{numbers[num]};
      std::cout << word << std::endl;
      fin += word;

        // case '1':
        //   j += "one";
        //   break;
        // case '2':
        //   j += "two";
        //   break;
        // case '3':
        //   j += "three";
        //   break;
      //}
    }
  }

std::cout << fin << std::endl;
return 0;
}
