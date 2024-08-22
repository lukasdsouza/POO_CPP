#include <iostream>

using namespace std;

int main(){

  char palavra[100];  
  cin.get(palavra, 100);

  int i = 0;
  int contar = 0;
  
  while(palavra[i] != '\0'){
    if(palavra[i] != ' '){
      contar ++;
    }
    i= i+1;
  }

  cout << "Tamanho é: "<< contar << endl;
  return 0;

  
}