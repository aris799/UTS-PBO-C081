#include<iostream>
#include<string>
#include <conio.h>
#include<vector>

using namespace std;

class restoran{
public:
    Menu menu;
    vector<Order> orders;

    void addOrder(Order order){
        orders.push_back(order);
    }

    void displayOrders(){
        cout << "                PESANAN" << endl;
        cout << "=========================================";
        for(int i=0; i<orders.size(); i++) {
            cout << endl << i+1 << ". " << orders[i].item.nama << "        -      " << orders[i].jumlah << " x Rp " 
                 << orders[i].item.harga;
        }
        cout << endl << "=========================================" << endl;
    }

    int hitungharga(){
        int totalharga = 0;
        for(int i=0; i<orders.size(); i++) {
            totalharga += orders[i].item.harga * orders[i].jumlah;
        }
        return totalharga;
    }
};
