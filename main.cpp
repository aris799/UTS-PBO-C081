#include<iostream> 
#include<string>
#include <conio.h>
#include<vector>

#include "item.h"
#include "menu.h"
#include "order.h"
#include "restoran.h"

using namespace std;

int main(){
    restoran restoran;

    Item item1 = {"Nasi Kuning", 20000};
    Item item2 = {"Nasi Goreng", 20000};
    Item item3 = {"Nasi Campur", 25000};
    Item item4 = {"Sate Daging", 25000};
    Item item5 = {"Gule Daging", 30000};
    Item item6 = {"Krengsengan", 30000};
    
    
    restoran.menu.addItem(item1);`
    restoran.menu.addItem(item2);
    restoran.menu.addItem(item3);
    restoran.menu.addItem(item4);
    restoran.menu.addItem(item5);
    restoran.menu.addItem(item6);
	
	cout<<"========================================="<<endl; 
    cout<<"   SELAMAT DATANG DI RESTORAN TERSERAH"<<endl; 
    cout<<"  JL. MUHAMMAD BAIHAQI ARRISALAH NO. 94"<<endl;
    cout<<"========================================="<<endl; 
	restoran.menu.displayMenu();
	
	int pilihan;

		list :
		cout<<" 1. Daftar Menu"<<endl;
		cout<<" 2. Buat Pesanan"<<endl;
		cout<<" 3. Lihat Pesanan"<<endl;
		cout<<" 4. Total Harga Pesanan"<<endl;
		cout<<" 5. Keluar"<<endl<<endl;
		cout<<" Pilih : ";
		cin>> pilihan;
		
		if(pilihan==1){
			cout<<endl;
			restoran.menu.displayMenu();
			goto list;
		}
		
		else if(pilihan==2){
			cout<<endl;
			int itemChoice, jumlah;
            cout << endl << " Pilih Nomer Menu yang Ingin Anda Pesan : ";
            cin >> itemChoice;
            cout << " Jumlah                                 : ";
            cin >> jumlah;
            Order order;
            order.item = restoran.menu.items[itemChoice-1];
            order.jumlah = jumlah;
            restoran.addOrder(order);
            cout << endl << " Pesanan Telah Ditambahkan" << endl<< endl;
        	goto list;
		}
		
		else if(pilihan==3){
			cout<<endl;
			restoran.displayOrders();
			cout<<endl;
			goto list;
		}
		
		else if(pilihan==4){
			cout<<endl;
			int totalharga = restoran.hitungharga();
			cout<<"========================================="<<endl; 
            cout<< "Total Harga                     Rp " << totalharga<< endl;
            cout<<"========================================="<<endl<<endl; 
            goto list;
		}
		
		else if(pilihan==5){
			cout<<endl;
			cout<<" Terima Kasih Telah Berkunjung di Restoran Terserah :)"<<endl;
			return 0;
			getch();
		}
	
		else{
			cout<<" Pilihan Tidak Tersedia, Harap Ulangi Kembali"<<endl<<endl;
			goto list;
		}
		
getch();
}
