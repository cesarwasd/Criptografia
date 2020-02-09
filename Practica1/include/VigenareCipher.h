#ifndef __VIGENARE_CIPHER_H__
#define __VIGENARE_CIPHER_H__
#include "Euclides.h"
#include <stdlib.h>
class VigenareCipher
{
    public:
      VigenareCipher(DiccAP dic);
      std::string Encrypt(std::string text,std::string key);
      std::string Decrypt(std::string ctext,std::string key);
    private:
      DiccAP d;
};
#endif
