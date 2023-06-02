#pragma once

#include <map>
#include "GiaoDien.cpp"
#include "gotoxy.cpp"
#include "Ve1Luot.cpp"

 
class BOT_search:public BOT, public gia{
string bien_so;
map<string,type_service>  checker;
public:
void insert_map_user();
void find_service();
void Menu_BOT();
   
};

void BOT_search:: find_service(){
    docfile.open("../Admin/txt/PayHistory.txt",ios::app);
    do{
        system("cls");
        Admin_Display_1();
        gotoxy((short)26,(short)3); cin>>bien_so;
        std::cout<<std::endl;
        if(bien_so!= "thoat")
        switch (checker[bien_so]){
            case khong: { //thu phiếu xe không vé
                cout<<"khong"<<endl;
                docfile<<left<<setw(20)<<bien_so<<setw(20)<<"| Khong Dang Ki"<<"| "<<time_in_life()<<std::endl;
                pay_tien(checker[bien_so]);
                _getwch();
                break;
            }

            case xe_ca_nhan_thang:{ //thu phiếu xe cá nhân tháng
            cout<<"xe ca nhan thang"<<endl;
            
             docfile<<left<<setw(20)<<bien_so<<setw(20)<<"| Ve C.N thang"<<"| "<<time_in_life()<<std::endl;
            pay_tien(checker[bien_so]);
                _getwch();

                break;
            }

            case xe_ca_nhan_quy: {  //thu phiếu xe cá nhân quý
            cout<<"xe ca nhan quy"<<endl;
            
             docfile<<left<<setw(20)<<bien_so<<setw(20)<<"| Ve C.N quy"<<"| "<<time_in_life()<<std::endl;
            pay_tien(checker[bien_so]);
                _getwch();
                break;
            }

            case xe_kinh_doanh_thang: { //thu phiếu xe kinh doanh tháng
            cout<<"xe kinh doanh thang"<<endl;
             docfile<<left<<setw(20)<<bien_so<<setw(20)<<"| Ve K.D thang"<<"| "<<time_in_life()<<std::endl;
            pay_tien(checker[bien_so]);
            _getwch();
            break;
            }

            case xe_kinh_doanh_quy: {   //thu phiếu xe kinh doanh quý
            cout<<"xe kinh doanh quy"<<endl;
            
             docfile<<left<<setw(20)<<bien_so<<setw(20)<<"| Ve K.D quy"<<"| "<<time_in_life()<<std::endl;
            pay_tien(checker[bien_so]);
            _getwch();
            break;
            }

            case xe_nha_nuoc_service: { //thu phiếu xe nhà nước
            cout<<"xe nha nuoc "<<endl;
            
             docfile<<left<<setw(20)<<bien_so<<setw(20)<<"| Xe Nha Nuoc"<<"| "<<time_in_life()<<std::endl;
            pay_tien(checker[bien_so]);
            _getwch();
                break;
            }
        }
    }while(bien_so != "thoat");
docfile.close();

}

    
// void BOT_search:: Menu_BOT(){
//     int n;

//      do{
        
//         cout<<"---BOT---"<<endl;
//         cout<<"1. Tra cuu bien so xe "<<endl;
//         cout<<"2. Thoat "<<endl;
//         cout<<"nhap lua chon cua ban --->";
//         cin>>n;
//     }while(n<1 || n>2);
// if(n==1) find_service();
// else return ;
// }

void BOT_search::insert_map_user(){
for(int i=0;i<account_main.size();i++){
    checker[account_main[i].second.second.second.first.BienSo]= account_main[i].second.second.second.second;  // kiểm tra biển số và loại dịch vụ
  //  cout<<checker[account_main[i].second.second.second.first.BienSo]<<" "<<endl;
}
}

void quick_setup(string bienso){
BOT_search a;
a.IOtaikhoan();
a.insert_map_user();
a.find_service();
}

