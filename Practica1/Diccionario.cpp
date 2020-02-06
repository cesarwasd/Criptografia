#include "include/Diccionario.h"
using namespace std;
DiccAP leer_mapa(std::string filename){
  DiccAP d = new Diccionario();

  fstream new_file;
  new_file.open(filename,ios::in);
  int i = 0;
  if(!new_file){
    cout<<"No such file";
    return nullptr;
  }
  else {
    string ch;
    while (!new_file.eof()){
      new_file >>ch;
      d->map[ch] = i++;
    }
    new_file.close();
  }
  d->len = d->map.size();
    return d;
}
void imprimir_diccionario(DiccAP d){
  cout<<"LEN:"<<d->len<<"\n";
  for (std::map<char,int>::iterator it=d->map.begin(); it!=d->map.end(); ++it)
  std::cout << it->first << " => " << it->second << '\n';
}
