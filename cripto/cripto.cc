#include "funciones_cripto.h"

int main(int argc, char* argv[]){
  Usage(argc, argv);

  std::string fichero_entrada = argv[1];
  std::string fichero_salida = argv[2];
  ContenidoArchivo(fichero_entrada,fichero_salida);

  int metodo = atoi(argv[3]);

  if (metodo == 1){
    std:: string palabra_secreta = argv[4];
  } else {
    int valor_de_K = atoi(argv[4]);
  }
  
  int operacion = atoi(argv[5]);

  return 0;
}