#pragma once
#include<iostream>
#include "Account.cpp"
#include "../Admin/gotoxy.cpp"
#include<vector>

using namespace std;

class user: public Account {
    protected:
int index;
string CCCD;
string ten;
Vehicle phuong_tien;
type_service dich_vu =khong;
    void process_user(int n);
    void menu_user();
    void xuat_thong_tin();
    void dang_ki_dich_vu();
    void choice();
};
void user::process_user(int n){
    switch (n){
        case 1:
            xuat_thong_tin();
            choice();
            break;
        case 2:
            dang_ki_dich_vu();
            break;
        default:
            break;
    }
}
void user::menu_user(){
    int n;
do{
    system ("cls");
gotoxy(30,6);  std::cout<<" ____________________________________________ ";
gotoxy(30,7);  std::cout<<"|                                            |";
gotoxy(30,8); std:: cout<<"|          1. xuat thong tin                 |";
gotoxy(30,9); std:: cout<<"|          2. Dang Ki dich vu                |";
gotoxy(30,10);std:: cout<<"|          3. Thoat                          |";
gotoxy(30,11); std::cout<<"|          Nhap Lua Chon Cua Ban :           |";  
gotoxy(30,12);std:: cout<<"|____________________________________________|";

    gotoxy((short)65,(short)11); std::cin>>n;
} while(n <1 || n> 3);
process_user(n);
}

void user::xuat_thong_tin(){
   
    system("cls");
gotoxy(45,6);   std::cout<<"xuat thong tin  "<<std::endl;
gotoxy(30,7);   std:: cout<<"------------------------------------";
gotoxy(30,8);   std:: cout<<"1. ten :"<<ten<<std::endl;
gotoxy(30,9);   std:: cout<<"2. CCCD :"<<CCCD<<std::endl;
gotoxy(30,10);   std:: cout<<"3. bien so xe :";
gotoxy(44,10);  std::  cout<<phuong_tien.BienSo<<std::endl;
gotoxy(30,11);   std:: cout<<"4. loai phuong tien :";
gotoxy(51,11);    if(phuong_tien.loai_xe == xe_ca_nhan) std:: cout<<"xe ca nhan"<<std::endl;
gotoxy(51,11);    if(phuong_tien.loai_xe == xe_kinh_doanh)  std:: cout<<"xe kinh doanh"<<std::endl;

gotoxy(30,12);   std:: cout<<"5. loai dich vu xe da dang ki :";
gotoxy(61,12);    if (dich_vu == 0)  std::cout<<"khong"<<std::endl;
gotoxy(61,12);    if (dich_vu == 1) std:: cout<<"xe ca nhan thang"<<std::endl;
gotoxy(61,12);    if (dich_vu == 2)  std::cout<<"xe ca nhan quy"<<std::endl;
gotoxy(61,12);    if (dich_vu == 3)  std::cout<<"xe kinh doanh thang"<<std::endl;
gotoxy(61,12);    if (dich_vu == 4)  std::cout<<"xe kinh doanh quy"<<std::endl;
gotoxy(30,13); std::   cout<<"------------------------------------"<<std::endl;
}
void user:: choice(){
     int n;
gotoxy(30,14);  std::  cout<<"1. tro lai "<<std::endl;
gotoxy(30,15);  std::  cout<<"2. dang ki dich vu "<<std::endl;
gotoxy(30,16);  std::  cout<<"nhap lua chon cua ban ---->";
gotoxy(58,16);  std::  cin>>n;
    switch (n)
    {
    case 1:
        menu_user();
        break;
    case 2:
        dang_ki_dich_vu();
        menu_user();
        break;
    default:
        break;
    }
    
}

void user::dang_ki_dich_vu(){
    int n;
    do{
        system("cls");
gotoxy(45,6) ;       std::cout<<"Dang Ki Dich Vu";
gotoxy(30,7);   std:: cout<<"------------------------------------";
    if (phuong_tien.loai_xe == xe_ca_nhan){
gotoxy(30,8);        cout<<"1. xe ca nhan thang \n";
gotoxy(30,9);        cout<<"2. xe ca nhan quy \n";
gotoxy(30,10);        cout<<"3. tro lai : \n";
gotoxy(30,11);       cout<<"nhap lua chon cua ban -->";
gotoxy(55,11);        cin>>n;
    }
    if (phuong_tien.loai_xe == xe_kinh_doanh){
gotoxy(30,8);        cout<<"1. xe kinh doanh thang \n";
gotoxy(30,9);        cout<<"2. xe kinh doanh quy \n";
gotoxy(30,10);        cout<<"3. tro lai : \n";
gotoxy(30,11);        cout<<"nhap lua chon cua ban -->";
gotoxy(56,11);        cin>>n;
    }
    }while(n<1 || n>3);
    if(phuong_tien.loai_xe== xe_ca_nhan && n==1)    dich_vu=xe_ca_nhan_thang; 
    if(phuong_tien.loai_xe== xe_ca_nhan && n==2)    dich_vu=xe_ca_nhan_quy; 
    if(phuong_tien.loai_xe== xe_kinh_doanh && n==1)    dich_vu=xe_kinh_doanh_thang; 
    if(phuong_tien.loai_xe== xe_kinh_doanh && n==2)    dich_vu=xe_ca_nhan_quy; 
   
    if(n!=3){
    gotoxy(35,13) ;    cout<<"dang ki thanh cong!"<<endl;
    gotoxy(30,14);    cout<<"bam phim bat ki de tiep tuc..."<<endl;
        _getwch();
        }
       
}
