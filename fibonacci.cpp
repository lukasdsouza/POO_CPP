#include <iostream>

using namespace std;

int f(int x){
  if(x == 0){
    return 0; 
  } else if(x == 1){
    return 1;
  } else {
    return f(x-1) + f(x-2);
  }
}

int main(){
  int n;
  cout << "Digite o numero: ";
  cin >> n;

  cout << "O " << n << " numero de fibonacci é: " << f(n) << endl;

  return 0;

}