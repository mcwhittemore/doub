#include<iostream>
#include "doubscript/doubscript.cpp"

int main(int argc, char **argv)
{
  try {
    
    doub::Doubscript prog = doub::Doubscript::fromFile(argv[1]);

    std::vector<double> args;
    for (int i=2; i<argc; i++) {
      args.push_back(std::stod(argv[i]));
    }

    prog.run("main", args);
  } catch(const char* e) {
    std::cout << e << "\n";
    exit(1);
  }
}
