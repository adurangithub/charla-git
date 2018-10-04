#include <iostream>

int main(int argc, char* argv[]){
  //Agregados parametros por línea de comandos
  if (argc < 2){
    std::cout<<"Usage: hello Nombre"<<std::endl;
  }
  std::cout<<"Hello World "<<argv[1]<<std::endl;
  return 0;
}
