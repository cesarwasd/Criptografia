#include "include/Diccionario.h"
#include "include/VigenareCipher.h"
using namespace std;

int main(){
  DiccAP d = leer_mapa("filename.txt");
  VigenareCipher vc(d);
  std::string mensaje,key;
  std::cout<<"Dame el mensaje: ";
  std::getline(std::cin, mensaje);
  std::cout<<"Dame la llave: ";
  std::getline(std::cin, key);
  imprimir_diccionario(d);
  std::string cmessage = vc.Encrypt(mensaje,key);
  std::string message = vc.Decrypt(cmessage,key);
  cout<<"cmessage: "<<cmessage<<"\n";
  cout<<"message: "<<message<<"\n";
return 0;
}
