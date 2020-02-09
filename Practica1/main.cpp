#include "include/Diccionario.h"
#include "include/AffineCipher.h"
using namespace std;

int main(){
  srand(time(NULL));
  /*DiccAP d = leer_mapa("filename.txt");
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
  cout<<"message: "<<message<<"\n";*/
  int* key = nullptr;
  DiccAP d = leer_mapa("filename.txt");
  cout<<"LEN: "<<d->len<<"\n";
  AffineCipher ac(d);
  key = ac.GenerateRandomKey();
  cout<<"a: "<<key[0]<<"\n";
  cout<<"b: "<<key[1]<<"\n";
  std::string mensaje;
  std::cout<<"Dame el mensaje: ";
  std::getline(std::cin, mensaje);
  std::string cmessage= ac.Encrypt(mensaje,key[0],key[1]);
  std::string message = ac.Decrypt(cmessage,key[0],key[1]);
  cout<<"cmessage: "<<cmessage<<"\n";
  cout<<"message: "<<message<<"\n";
return 0;
}
