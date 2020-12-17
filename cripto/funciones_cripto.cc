#include "funciones_cripto.h"

void Usage(int argc, char *argv[]) {
  if (argc != 6) {
    std::cout << argv[0] << " -- Cifrado de ficheros" << std::endl;
    std::cout << "Modo de uso:" << argv[0] << " fichero_entrada fichero_salida método password operación" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << argv[0] << " -- Cifrado de ficheros" << std::endl;
    std::cout << "Modo de uso:" << argv[0] << " fichero_entrada fichero_salida método password operación" << std::endl;
    std::cout << "fichero_entrada: Fichero a codificar" << std::endl;
    std::cout << "fichero_salida:  Fichero codificado" << std::endl;
    std::cout << "método:          Indica el método de encriptado" << std::endl;
    std::cout << "                   1: Cifrado xor" << std::endl;
    std::cout << "                   2: Cifrado de César" << std::endl;
    std::cout << "password:        Palabra secreta en el caso de método 1, Valor de K en el método 2" << std::endl;
    std::cout << "operación:       Operación a realizar en el fichero" << std::endl;
    std::cout << "                   +: encriptar el fichero" << std::endl;
    std::cout << "                   -: desencriptar el fichero" << std::endl;
    exit(EXIT_SUCCESS);
  }
}

void ContenidoArchivo(std::string fichero_entrada, std::string fichero_salida){
  std::ifstream archivo;
  std::string contenido_fichero_entrada;
  std::string contenido_fichero_salida;

  archivo.open(fichero_entrada, std::ios::in);
  while(!archivo.eof()){
    getline (archivo,contenido_fichero_entrada);
  }
  archivo.close();

  archivo.open(fichero_salida, std::ios::in);
  while(!archivo.eof()){
    getline (archivo,contenido_fichero_salida);
  }
  archivo.close();
  std::cout << contenido_fichero_entrada << " " << contenido_fichero_salida << std::endl;
}

void EncriptarXOR(){

}

void EncriptarCesar(){

}