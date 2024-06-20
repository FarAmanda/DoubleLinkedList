// DoubleLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Group members Amanda Farghli, 

#include <iostream>
#include "doublelist.h"
#include <cstdlib>

int main()
{
    int input;
    NodeP::LinkedList list;

    for (int i = 0; i < 15; i++)
    {
        list.AddToTail(rand());
    }

    std::cout << "Hello your randomly generated linked list is\n";
    list.PrintElements();
    do {
        std::cout << "\nPlease select one of the menu options below\n"
            << "0 - Exit Menu\n"
            << "1 - Add to tail\n"
            << "2 - Print in Order\n"
            << "3 - Print Reverse\n";
        std::cin >> input;
        if (input < 0)
        {
            input *= -1;
        }

        if (input == 1)
        {
            std::cout << "What number do you wish to input?\nNumber: ";
            std::cin >> input;
            list.AddToTail(input);
            std::cout << "\nYour new list is below.\n";
            list.PrintElements();
        }

        if (input == 2)
        {
            std::cout << "\nYour list is below.\n";
            list.PrintElements();
        }

        if (input == 3)
        {
            std::cout << "\nYour reversed order list is below\n";
            list.PrintReverse();
        }
        
    } while (input != 0);
        return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
