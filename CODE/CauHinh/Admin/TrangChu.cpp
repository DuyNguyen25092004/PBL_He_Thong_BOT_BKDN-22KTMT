#include "GiaoDien.cpp"
#include "C:\Users\MSI PC\Desktop\pbl_adjust\Minh-vs-DuyNguyen\CauHinh\User\manhinhV2.cpp"
#include "Login.cpp"
#include "TraCuu.cpp"
#include "gotoxy.cpp"
#include "Find_change_in4.cpp"
using namespace std;

class trangchu{
    private:
    login account;
    tracuu check;
    gia price;
    Find_change find_change;
    vector<int> tongthunhap;
    int password;


    public:
    void xu_li(){
        while(true){
            short n;
            string time;
            system("cls");
            TrangChu_Display();
            cin>>n;
            switch(n){
                case 1:
                    account.xu_li();                  
                    time=time_in_life();
                    
                    do{
                        system("cls");
                        Admin_Diplay();
                        string s;
                        cin>>n;
                        switch(n){
                            case 1:        //Tra cuu ve thong hanh
                                
                                check.xu_li();
                                
                            break;

                            // case 2:        //Ve 1 luot   
                            //     system("cls");
                            //     Admin_Display_2();
                            //     cin>>n;
                            //     switch (n){
                            //         short x;
                            //         case 1:
                            //             system("cls");
                            //             Xe_Dich_Vu_Display();
                            //             cin>>x;
                            //             price.pay_xedichvu(x);
                            //             thunhapca.push_back(price.get_giave());
                            //         break;

                            //         case 2:
                            //             system("cls");
                            //             Xe_Van_Tai_Display();
                            //             cin>>x;
                            //             price.pay_xevantai(x);
                            //             thunhapca.push_back(price.get_giave());
                            //         break;
                            //     }
                            //     n=2;
                            // break;
                            

                            case 2:
                                find_change.IOtaikhoan();
                                find_change.Find_info();
                                find_change.updateAC();
                                break;



                            case 3:         //Tong ket ca
                                account.end_save_history();
                                system("cls");
                                docfile.open("C:/Users/MSI PC/Desktop/pbl_adjust/Minh-vs-DuyNguyen/CauHinh/Admin/txt/PayHistory.txt",ios::app);
                                if(docfile.is_open()){
                                    docfile<<left<<setw(20)<<" "<<"| "<<"Tong tien ca: "<<edit(xuli_vetor(thunhapca))<<setw(7)<<",000"<<"VND"<<endl<<endl;
                                }
                                docfile.close();
                                docfile.open("C:/Users/MSI PC/Desktop/pbl_adjust/Minh-vs-DuyNguyen/CauHinh/Admin/txt/PayHistory.txt",ios::in);
                                while(getline(docfile,s)){
                                    if(s==time){
                                        do{
                                            cout<<s<<endl;
                                            if(s=="VND"){break;}
                                        } while (getline(docfile,s));
                                        break;
                                    }
                                }
                                system("pause");
                                docfile.close();
                                thunhapca.clear();
                            break;        
                        }
                    } while (n!=3);
                    n=1;
                break;

                case 2:
                    set_password();
                break;
            }
            if(n==3){
                break;
            }
        }
    }

    private:
    void tinh_tongthunhap(){
        string s;
        docfile.open("C:/Users/MSI PC/Desktop/pbl_adjust/Minh-vs-DuyNguyen/CauHinh/Admin/txt/PayHistory.txt",ios::in);
        while(docfile>>s){
            if(s=="ca:"){
                docfile>>s;
                tongthunhap.push_back(edit(s));
            }
        }
        docfile.close();
    }
    void xuat_tongthunhap(){
        system("cls");
        string s;
        docfile.open("C:/Users/MSI PC/Desktop/pbl_adjust/Minh-vs-DuyNguyen/CauHinh/Admin/txt/PayHistory.txt",ios::in);
        while(getline(docfile,s)){
            cout<<s<<endl;
        }
        cout<<"___________________________________________________"<<endl<<endl;
        cout<<" => Tong thu nhap: "<<edit(xuli_vetor(tongthunhap))<<",000 VND "<<endl;
        cout<<"___________________________________________________"<<endl<<endl;
        system("pause");
        docfile.close();
        tongthunhap.clear();
    }
    void set_password(){
        int true_password=((16118121&2351)<<5);
        system("cls");
        TrangChu_Display_2();
        gotoxy((short)15,(short)3); cin>>password;
        if(password==true_password){
            tinh_tongthunhap();
            xuat_tongthunhap();
        } else {
            cout<<"/t Sai!  XXX"<<endl;
            system("pause");
        }
    }
};

int main(){
    trangchu a;
    a.xu_li();
    return 0;
}
