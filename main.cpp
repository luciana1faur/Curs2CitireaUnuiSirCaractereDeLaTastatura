#include <iostream>
using namespace std;

int main() {
  char s[200];
  int i;
  cout << "Introduceti un sir de caractere de la tastatura, fara spatii: ";
  cin >> s;
  i = 0;
  while (s[i] != 0)
    i++;
  cout << "Sirul are " << i << " caractere." << endl;
  return 0;
}