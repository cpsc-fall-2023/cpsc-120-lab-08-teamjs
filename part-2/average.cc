// Jemin Song
// jeminsong0119@csu.fullerton.edu
// @jeminsong
// Partners: @BOBCHOI

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    std::cout << "error: you need to give at least one value\n";
    return -1;
  }
  double sum = 0.0;
  int ime = 1;
  for (; ime < arguments.size(); ime++) {
    std::string num = (arguments.at(ime));
    double number = 0.0;
    number = std::stod(arguments.at(ime));
    sum += number;
  }
  double average = 0.0;
  average = sum / (ime - 1);
  std::cout << "average = " << average << "\n";
  return 0;
}