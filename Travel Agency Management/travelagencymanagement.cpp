#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Package{
    string dest, sDate, eDate;
    int price ;
};


void displayTour(Package pack){
    cout<<"Destination: "<<pack.dest<<endl;
    cout<<"Start Date: "<<pack.sDate<<endl;
    cout<<"Return Date: "<<pack.eDate<<endl;
    cout<<"Package Price: Rs"<<pack.price<<endl<<endl;
}
int main(){
    Package pack{"1. Patna", "20-05-20234","30-05-2024", 30000 };
    Package pack2{"2. Guwahati", "01-06-2024", "10-06-2024", 40000};
    Package pack3{"3. Kashmir", "11-06-2024", "20-06-2024", 50000};

    cout<<"...Tour Plans..."<<endl;
    displayTour(pack);
    displayTour(pack2);
    displayTour(pack3);

    int choice;
    cout<<"Select Package No: ";
    cin>>choice;

    if(choice==1){
        system("cls");
        cout<<"You have Selected the following package"<<endl;
        displayTour(pack);
    }
    else if(choice==2){
        system("cls");
        cout<<"You have Selected the following package"<<endl;
        displayTour(pack2);

    }
    else if(choice==3){
        system("cls");
        cout<<"You have Selected the following package"<<endl;
        displayTour(pack3);
    }
}

