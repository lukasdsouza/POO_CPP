#include <iostream>

using namespace std;

char toUpper(char letra){

  if(letra >= 'a' && letra <= 'z'){

    return letra - 32;

  } 
  return letra;

}
char toLower(char letra){

  if(letra >= 'A' && letra <= 'Z'){

    return letra + 32;

  } 
  return letra;

}
int main(){
  char letra;

  letra = cin.get();

  cout << "toUpper = " << toUpper(letra) << endl;
  cout << "toLower = " << toLower(letra) << endl;

  return 0;
}
