#include <iostream>
#include <cassert>
#include "singlelist.h"


int main() {

    SingleList<int> list1 = SingleList<int>();
    SingleList<int> list3 = SingleList<int>();
    
    for(int i = 0; i < 10; i++)
    {
        list1.push_back(i);
    }
    std::cout << "Lista list1: ";
    list1.display();

    std::cout << "Rozmiar listy list1 to: " << list1.size() << std::endl;
    
    list1.reverse();
    std::cout << "Lista list1 po operacji reverse: ";
    list1.display();
    std::cout << "Pierwszy elemnt listy list1 to: " << list1.front() << " , ostatni: " << list1.back() << std::endl;
    list1.pop_back();
    std::cout << "List1 po operacji pop_back(): ";
    list1.display();
    std::cout << "Pierwszy elemnt listy to: " << list1.front() << " , osttani: " << list1.back() << std::endl;
    list1.pop_front();
    std::cout << "List1 po operacji pop_front(): ";
    list1.display();
    std::cout << "Pierwszy elemnt listy to: " << list1.front() << " , osttani: " << list1.back() << std::endl;


    SingleList<int> list2(list1);
    std::cout << "Po wywolaniu konstruktora kopiujacego SingleList<int> list2(list1): ";
    list2.display();
    list3 = list2;
    std::cout << "Po wywolaniu kopiujacego operatora przypisania list3 = list2: " << std::endl;
    list3.display();
    list3.clear();
    std::cout << "Lista po operacji clear: ";
    list3.display();

   return 0;
}
