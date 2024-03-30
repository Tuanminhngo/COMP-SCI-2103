#include <iostream>

using namespace std;

static int count = 0;
void p(){
  count++;
  if (count <= 5){
    cout << "hello" << count << endl;
    p();
  }
}

int main(){
  p();
  return 0;
}