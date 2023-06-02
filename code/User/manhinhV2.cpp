#include<iostream>
#include "../Admin/gotoxy.cpp"
#include "User.cpp"
#include <fstream>
#include<algorithm>
using namespace std;
  
  
bool sapxep(const pair<Account,pair<string,pair<string,pair<Vehicle,type_service> > > > &a,const pair<Account,pair<string,pair<string,pair<Vehicle,type_service> > > > &b){
    return a.second.first < b.second.first;
}

class BOT :public  user {
    int n= 0;
    std:: fstream info;
public:

void DangNhap();
void DangKi();
void ProCess(){
    switch (n)
    {
    case 1:
        DangNhap();
        break;
    
    case 2:
        DangKi();
        break;

    default:
        return;
        break;
    }
}
void updateAC();
void Menu(){
    do{
        system ("cls");
    gotoxy(30,6);  cout<<" ____________________________________________ ";
    gotoxy(30,7);  cout<<"|                                            |";
    gotoxy(30,8);  cout<<"|          1. Dang Nhap                      |";
    gotoxy(30,9);  cout<<"|          2. Dang Ki                        |";
    gotoxy(30,10); cout<<"|          3. Thoat                          |";
    gotoxy(30,11); cout<<"|          Nhap Lua Chon Cua Ban :           |";  
    gotoxy(30,12); cout<<"|____________________________________________|";

        gotoxy((short)65,(short)11); cin>>n;
    } while(n <1 || n> 3);
    ProCess();
}
void IOtaikhoan(){
    info.open("../User/tai_khoan.txt",ios::in);
    Account temp;
    string ten_temp;
    string cccd_temp;
    Vehicle loai_xe_temp;
    type_service dich_vu_temp;
    int ch1;
    char ch2[5];
    while(info>>ch2){
             info>>temp.TaiKhoan;
             info>>temp.MatKhau;
             info.ignore(1);
             getline(info,ten_temp);
             getline(info,cccd_temp);
             info>>loai_xe_temp.BienSo;
             info>>ch1;
             loai_xe_temp.loai_xe=(type_vehicle)ch1;
             info>>ch1;
             dich_vu_temp=(type_service)ch1;
            account_main.push_back(make_pair(temp,make_pair(ten_temp,make_pair(cccd_temp,make_pair(loai_xe_temp,dich_vu_temp)))));
    }
    info.close();
}
};

void BOT::updateAC(){
    info.open("../User/tai_khoan.txt", ios::out);
    sort(account_main.begin(),account_main.end(),sapxep);
    for(int i=0;i<account_main.size();i++){
        info<<i+1<<"-----\n";
        info<<account_main[i].first.TaiKhoan<<"\n";
        info<<account_main[i].first.MatKhau<<"\n";
        info<<account_main[i].second.first<<"\n";
        info<<account_main[i].second.second.first<<"\n";
        info<<account_main[i].second.second.second.first.BienSo<<"\n";
        info<<account_main[i].second.second.second.first.loai_xe<<"\n";
        info<<account_main[i].second.second.second.second<<"\n";
    }
    info.close();
    info.open("../Admin/txt/bienso.txt",ios::out);
    for(int i=0;i<account_main.size();i++){
        info<<account_main[i].second.second.second.first.BienSo<<"\n";
        info<<account_main[i].second.second.second.second<<"\n";
    }
    info.close();
}

void BOT:: DangNhap(){
    int check =0;
    system("cls");
    gotoxy(45,6); cout<<"DANG NHAP";
    gotoxy(30,7); for (int i=1;i<=40;i++)   cout<<"_";
    gotoxy(30,9);  cout<<"nhap tai khoan : ";
    gotoxy(30,10); cout<<"nhap mat khau : ";
    cin.ignore(1);
    Account ptr;
    gotoxy(46,9);   cin>>ptr.TaiKhoan;
    gotoxy(46,10); cin>>ptr.MatKhau;
    for (int i=0;i< account_main.size();i++){
        if ( (string)account_main[i].first.TaiKhoan == (string)ptr.TaiKhoan &&(string)account_main[i].first.MatKhau == (string)ptr.MatKhau) {
            check=1;
        gotoxy(35,12) ;  cout<<"dang nhap thanh cong !"<<endl;
        gotoxy(30,13) ;  cout<<"-->bam phim bat ki de tiep tuc ..."<<endl;
            ten=account_main[i].second.first;
            CCCD= account_main[i].second.second.first;
            phuong_tien= account_main[i].second.second.second.first;
            dich_vu= account_main[i].second.second.second.second;
            _getwch();
            menu_user();
            account_main[i].second.second.second.second= dich_vu;
            return;
        }
    }
    if(check ==0){
    
        cout<<"tai khoan hoac mat khau sai !"<<endl;
    do {
        int n;
        cout<<"1. Dang nhap lai !"<<endl;
        cout<<"2. Tro lai man hinh chinh !"<<endl;
        cout<<"nhap lua con cua ban ---> ";
        cin>>n;
        
        switch (n)
        {
        case 1:
            DangNhap();
            break;
        case 2:
            Menu();
            return;

        default:
            break;
        }
    } while ( n <1 || n >2);


    }
}

void BOT:: DangKi(){
    Account ptr;
    info.open("../User/tai_khoan.txt", ios::app);
    int check =0; 
        system("cls");
     check=0;
    gotoxy(45,6); cout<<"DANG KI";
    gotoxy(30,7); for (int i=1;i<=40;i++)   cout<<"_";
    gotoxy(27,9);  cout<<"nhap tai khoan (CCCD) : ";
    gotoxy(27,10); cout<<"nhap mat khau : ";
    gotoxy(50,9);   cin>>ptr.TaiKhoan;
    gotoxy(43,10); cin>>ptr.MatKhau;
    for (int i=0;i< account_main.size();i++){
        if ( (string)account_main[i].first.TaiKhoan == (string)ptr.TaiKhoan) {
            check=1;
            cout<<"tai khoan bi trung !"<<endl;
            
            do {
                int n;
        cout<<"1. Dang ki lai !"<<endl;
        cout<<"2. Tro lai man hinh chinh !"<<endl;
        cout<<"nhap lua con cua ban ---> ";
        cin>>n;
        
        switch (n)
        {
        case 1:
            DangKi();
            break;
        case 2:
            Menu();
            break;

        default:
            break;
        }
    } while ( n <1 || n >2);
            
        }
    }
    string cccd_temp;
    string ten_temp;
    cout<<"nhap ten : ";
    cin.ignore(1);
    getline(cin,ten_temp);
    cccd_temp=ptr.TaiKhoan;
    Vehicle loai_xe_temp;
    cout<<"nhap bien so xe : ";
    cin>>loai_xe_temp.BienSo;
    loai_xe_temp.loai_xe = xe_ca_nhan;
    type_service dich_vu_temp;
    dich_vu_temp= khong;
    if (check==0) {
        account_main.push_back(make_pair(ptr,make_pair(ten_temp,make_pair(cccd_temp,make_pair(loai_xe_temp,dich_vu_temp)))));
        cout<<"dang ki thanh cong !"<<endl;
        cout<<"-->bam phim bat ki de tro lai man hinh chinh !"<<endl;
        _getwch();
        system("cls");
        info.close();
        Menu();
    }
    else{
        DangKi();
        info.close();
    }
}

void chay_ct_user(){
    BOT A;
    A.IOtaikhoan();
    A.Menu();
    A.updateAC();
    return ;
}