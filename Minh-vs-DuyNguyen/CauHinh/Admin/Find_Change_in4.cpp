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
    
        
    cout<<"1. sua thong tin"<<endl;
    cout<<"2. tro lai "<<endl;
    cout<<"nhap lua chon cua ban -->";
    cin>>n;

    switch (n){
        case 1:
            xuat_thong_tin();
            int n_temp;
            cout<<"nhap muc can thay doi :";
            cin>>n_temp;
            switch (n_temp)
            {
             case 1:
                cout<<"nhap ten can thay doi : ";
                cin.ignore(1);
                getline(cin,ten);
                account_main[index].second.first=ten;
                cout<<"thay doi thanh cong ! Bam phim bat ki de tiep tuc!";
                _getwch();
                break;
              case 2:
                cout<<"nhap CCCD can thay doi: ";
                getline(cin,CCCD);
                account_main[index].second.second.first=CCCD;
                cout<<"thay doi thanh cong ! Bam phim bat ki de tiep tuc!";
                _getwch();
                break;
              case 4:
                int temp; //dùng để nhập các lựa chọn
                cout<<"nhap loai phuong tien can thay doi : "<<endl;
                cout<<"1. xe ca nhan "<<endl;
                cout<<"2. xe kinh doanh "<<endl;
                cout<<"3. xe nha nuoc "<<endl;
                cin>>temp;
                if(temp==1) account_main[index].second.second.second.first.loai_xe= xe_ca_nhan;
                if(temp==2) account_main[index].second.second.second.first.loai_xe= xe_kinh_doanh;
                if(temp==3) account_main[index].second.second.second.first.loai_xe= xe_nha_nuoc;
                cout<<"thay doi thanh cong ! Bam phim bat ki de tiep tuc!";
                _getwch();
                break;
              case 3:
                cout<<"nhap bien so xe can thay doi: ";
                cin>>phuong_tien.BienSo;
                account_main[index].second.second.second.first.BienSo=phuong_tien.BienSo;
                cout<<"thay doi thanh cong ! Bam phim bat ki de tiep tuc!";
                _getwch();
                break;
             case 5:
                cout<<"Muc nay ban co the tu dang ki ! Bam phim bat ki de tiep tuc";
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