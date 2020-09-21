# include <iostream>
using namespace std;

int main(){
  char s[200];
  int i;
  i = 0;

  cout << "Introduceti propozitia: " << endl;
  cin.getline(s, 199);

  while (s[i] != 0)
    i++;
    cout << "Nr de caractere in propozitie este: " << i << endl;

    return 0;
}