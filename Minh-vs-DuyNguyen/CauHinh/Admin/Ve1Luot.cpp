#include "GiaoDien.cpp"
#include "gotoxy.cpp"
#include<vector>
using namespace std;
vector<int> thunhapca;
class gia{
    private:
    int giave;

    void save_PayHistory(){    
            docfile.open("C:/Users/MSI PC/Desktop/pbl_adjust/Minh-vs-DuyNguyen/CauHinh/Admin/txt/PayHistory.txt",ios::app);
            if(docfile.is_open()){
                docfile<<left<<setw(20)<<" "<<"| ";
                if(get_giave()>=100){
                    docfile<<get_giave()<<setw(15)<<",000"<<"| "<<time_in_life()<<endl;
                } else {
                    docfile<<get_giave()<<setw(16)<<",000"<<"| "<<time_in_life()<<endl;
                }
            }
            docfile.close();
    }

    public:
    void pay_tien(short n){
        switch(n){
            case 0: //khong dang ki
            giave=50;
            thunhapca.push_back(get_giave());
            cout<<"so tien can thu la "<<giave<<endl;
            break;

            case 1: // xe ca nhan thang
            giave=35;
            thunhapca.push_back(get_giave());
            cout<<"so tien can thu la "<<giave<<endl;
            break;
            
            case 2: //xe ca nhan quy
            giave=30;
            thunhapca.push_back(get_giave());
            cout<<"so tien can thu la "<<giave<<endl;
            break;
            
            case 3: // xe kinh doanh thang
            giave=40;
            thunhapca.push_back(get_giave());
            cout<<"so tien can thu la "<<giave<<endl;
            break;

            case 4: //xe kinh doanh quy
            giave=35;
            thunhapca.push_back(get_giave());
            cout<<"so tien can thu la "<<giave<<endl;
            break;

            case 5: //xe nha nuoc
            giave=0;
            thunhapca.push_back(get_giave());
            cout<<"so tien can thu la "<<giave<<endl;
            break;
        }
        if(n>=0 and n<=5){
            save_PayHistory();
        }
    } 
    int get_giave(){
        return giave;
    }
};