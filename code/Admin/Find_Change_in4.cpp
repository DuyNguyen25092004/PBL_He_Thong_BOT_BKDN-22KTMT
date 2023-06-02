#include<iostream>

#include<vector>
class Find_change: public BOT{
    int index;
public:
void Find_info();
void choice();
};
void Find_change:: Find_info(){
    string CCCD_temp;
    do{
        system("cls");
cout<<"Nhap CCCD can tra cuu : ";
cin >> CCCD_temp;
if(CCCD_temp !="thoat"){
bool kiemtra=false;
for (int i=0;i<account_main.size();i++){
    if(account_main[i].first.TaiKhoan == CCCD_temp){
        index=i;
        kiemtra=true;
         ten=account_main[i].second.first;
            CCCD= account_main[i].second.second.first;
            phuong_tien= account_main[i].second.second.second.first;
            dich_vu= account_main[i].second.second.second.second;
    }
}
    if(kiemtra==true){
        
            choice();
    }
    else {
        cout<<"khong tim thay, vui nhap nhap lai!"<<endl;
        _getwch();
        }
}

    }while(CCCD_temp != "thoat");
}

void Find_change::choice(){
    int n;
    do{
    xuat_thong_tin();
    
        
  gotoxy(30,14);   cout<<"1. sua thong tin"<<endl;
  gotoxy(30,15);   cout<<"2. tro lai "<<endl;
  gotoxy(30,16);   cout<<"nhap lua chon cua ban -->";
  gotoxy(58,16);   cin>>n;

    switch (n){
        case 1:
            xuat_thong_tin();
            int n_temp;
         gotoxy(30,14);    cout<<"nhap muc can thay doi :";
         gotoxy(58,14);   cin>>n_temp;
            switch (n_temp)
            {
             case 1:
            gotoxy(30,15);        cout<<"nhap ten can thay doi : ";
                cin.ignore(1);
            gotoxy(58,15);    getline(cin,ten);
                account_main[index].second.first=ten;
            gotoxy(30,16);    cout<<"thay doi thanh cong ! Bam phim bat ki de tiep tuc!";
                _getwch();
                break;
              case 2:
             gotoxy(30,15);   cout<<"nhap CCCD can thay doi: ";
             cin.ignore(1);
             gotoxy(58,15);    getline(cin,CCCD);
                account_main[index].second.second.first=CCCD;
            gotoxy(30,16);    cout<<"thay doi thanh cong ! Bam phim bat ki de tiep tuc!";
                _getwch();
                break;
              case 4:
                int temp; //dùng để nhập các lựa chọn
            gotoxy(30,15);   cout<<"nhap loai phuong tien can thay doi : "<<endl;
            gotoxy(30,16);   cout<<"1. xe ca nhan "<<endl;
            gotoxy(30,17);   cout<<"2. xe kinh doanh "<<endl;
            gotoxy(30,18);   cout<<"3. xe nha nuoc "<<endl;
            gotoxy(30,19);   cout<<"nhap lua chon cua ban -->";
            gotoxy(58,19);   cin>>temp;
                if(temp==1) account_main[index].second.second.second.first.loai_xe= xe_ca_nhan;
                if(temp==2) account_main[index].second.second.second.first.loai_xe= xe_kinh_doanh;
                if(temp==3) account_main[index].second.second.second.first.loai_xe= xe_nha_nuoc;
             gotoxy(30,20);   cout<<"thay doi thanh cong ! Bam phim bat ki de tiep tuc!";
                _getwch();
                break;
              case 3:
            gotoxy(30,15);    cout<<"nhap bien so xe can thay doi: ";
            gotoxy(58,15);    cin>>phuong_tien.BienSo;
                account_main[index].second.second.second.first.BienSo=phuong_tien.BienSo;
            gotoxy(30,16);    cout<<"thay doi thanh cong ! Bam phim bat ki de tiep tuc!";
                _getwch();
                break;
             case 5:
            gotoxy(30,15);    cout<<"Muc nay ban co the tu dang ki ! Bam phim bat ki de tiep tuc";
                _getwch();
                break;

             default:
                break;
            }
        default:
            break;
    }
   // if(n!=2) Find_change();
}while(n!=2);
}