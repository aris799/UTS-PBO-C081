#include<iostream>
#include<string>
#include <conio.h>
#include<vector>

using namespace std;

class Menu{
public:
    vector<Item> items;

    void addItem(Item item){
        items.push_back(item);
    }

    void displayMenu(){
        cout << "              MENU MAKANAN" << endl;
        cout << "=========================================";
        for(int i=0; i<items.size(); i++) {
            cout << endl << i+1 << ". " << items[i].nama << "                   Rp " << items[i].harga;
        }
        cout << endl << "=========================================" << endl<< endl;
    }
};
