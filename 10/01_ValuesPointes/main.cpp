#include <iostream>

using namespace std;

// Макрос S(x) - определение макроса с параметром x
//  #x - вставить x как строчку
//  x - вставить x как значение
#define S(x) cout << __LINE__ << ": " << #x << " = " << x << endl;

int main() {
  // Переменные:
  //  1. Значения
  //  2. Указатели
  //  3. Ссылки
  // == Переменные-значения ==
  int a, b; // Значение находится в
  // статической памяти или в стеке
  a = 2;
  b = a + 3;
  // Передаются - копируется значение
  // == Переменные-указатели ==
  // Объявляются с использованием *
  // Две '*' - указатель на указатель
  // Три '*' - указатель на указатель на указатель..
  //  ... и т.д. ..
  int* p, *q;
  // Указатель может указывать на
  // переменную-значение
  // Для этого перед именем переменной-значения
  // ставится '&'
  p = &a; // Теперь p - указатель на a
  S(a); // Печатаем значение a
  S(*p); // Печатаем то, на что указывает p
  // т.е., в данном случае, на a
  S(p); // Печатаем адрес 'a' в памяти
  q = p; // Теперь в переменной q адрес a
  S(*q); // Значение 'a'
  int** pp = &p;
  S(**pp);
  // Заводим переменную в динамической памяти
  p = new int; // Если new без скобок []
  *p = 10;
  S(*p);
  delete p; // то и delete без скобок []
  // Заводим массив чисел
  p = new int[100]; // Если new со скобками []
  p[1] = 20;
  S(p[1]);
  *(p + 1) = 30;
  S(p[1]);
  delete[] p; // То и delete со скобками []
  void* v = &a; // void * - указатель без типа
  // используется когда мы не знаем на что он
  // будет указывать. И нам и не важно для
  // выполнения операции.
  // Например, если нужно скопировать кусок
  // памяти заданного размера
  *((int*)v) = 10;

  // == Переменные-ссылки ==
  int& r = a; // r - ссылка на a (альтернативное имя)
  S(r);
  int& rr = r;
  S(rr);
  rr = 10;
  S(a);

  return 0;
}
