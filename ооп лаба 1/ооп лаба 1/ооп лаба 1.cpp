#include <iostream>
using namespace std;
#include "Products.h"
Products make_Products(int ab, int bav) {
    Products t;
    t.Init(ab,bav);
    return t;
 }

int main()
{
    int a, b;
    Products blesk;
    setlocale(0, "ru");
    Products Honey;
    Honey.Init(20,2);
    Honey.Show();
    Honey.cost();

    Products Apple;
    Apple.Read();
    Apple.cost();
    
    Products Oranges[3]{};
    for (int i = 0; i < 3; i++) {
        Oranges[i].Read();
        Oranges[i].cost();
    }
    Products* Chocolate=new Products[3];
    for (int i = 0; i < 3; i++) {
        Chocolate[i].Read();
        Chocolate[i].cost();
    }
    ////дописать


    Products* Banana=new Products;
    Banana->Init(50,5);
    Banana->Show();
    Banana->cost();
    ////дописать

    //Внешняя функция
    cout << "Введите first: "; cin >> a;
    cout << "Введите second: "; cin >> b;
    blesk=make_Products(a, b);
    blesk.Show();
    return 0;
}
