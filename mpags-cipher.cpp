#include <iostream>
#include <string>
#include <vector>

//Trying to convert user's character into int so it
//can be used for the array

int main(int argc, char* argv[])
{
  const std::vector<std::string> cmdLineArgs{argv, argv+argc};

  std::string input_file{""};
  std::string output_file{""};

//iterate over all arguments (each character of user input);
//prints them

  for (int i{1}; i < argc; i++)
    {
      const std::string & argument = cmdLineArgs[i];

      if (argument == "-h" or argument == "--help")
      {
        std::cout <<"generic help text"<<std::endl;
        break;
      }
      else if (argument == "--version")
      {
        std::cout <<"version number 0.2.1" << std::endl;
        break;
      }
      else if (argument == "-i")
      {
        if (++i < argc)
        {
          input_file = cmdLineArgs[i];
          std::cout << "input: " << input_file <<std::endl;
        }
        else
        {
          std::cout << "no file input" << std::endl;
        }
      }
      else if (argument == "-o")
      {
        if (++i << argc)
        {
          //why not i+1??
          output_file = cmdLineArgs[i];
          std::cout << "output: " << output_file <<std::endl;
        }
        else
        {
          std::cout << "no file input" <<std::endl;
        }
      }
      else
      {
        std::cout<< cmdLineArgs[i] <<std::endl;
      }

    }


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
  {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX",
  "SEVEN", "EIGHT", "NINE" };

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

        int num{in_char-'0'};  //something wrong with this line
        std::string word{numbers[num]};
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
