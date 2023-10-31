// Jemin Song
// jeminsong0119@csu.fullerton.edu
// @jeminsong
// Partners: @Adriantr13

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
  for (int i = 1; i < argc; ++i) {
    sum += std::stod(arguments[i]);
  }
  double average = sum / (argc - 1);
  std::cout << "average = " << average << "\n";
  return 0;
}
