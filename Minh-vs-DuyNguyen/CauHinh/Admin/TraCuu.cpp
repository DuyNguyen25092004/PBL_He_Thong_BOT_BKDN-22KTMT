
#include "BOT.cpp"
using namespace std;


class tracuu: public BOT_search{
    private:
    string bienso;
    char loaixe;
    void docfile_bienso(){
        short k;
        string s_bienso;
        docfile.open("C:/Users/MSI PC/Desktop/pbl_adjust/Minh-vs-DuyNguyen/CauHinh/Admin/txt/bienso.txt",ios::in); //Nguyên lưu file user rồi thì đổi tên lại giúp Minh
        if(docfile.is_open()){
            while (docfile>>s_bienso){
                if(s_bienso==bienso){
                    k=1;
                    docfile>>loaixe;
                    break;
                } else {
                    k=0;
                }
            }
        }
        docfile.close();
        switch(k){
            case 0:
            std::cout<<"Chua Dang Ki! XXXXXXXXXXX"<<std::endl;
            system("pause");
            break;

            case 1:
            std::cout<<"Da dang ki! Checked!"<<std::endl;
            system("pause");
            user_history();
            break;
        }
    }
    void user_history(){
       docfile.open("C:/Users/MSI PC/Desktop/pbl_adjust/Minh-vs-DuyNguyen/CauHinh/Admin/txt/PayHistory.txt",ios::app);
        if(loaixe=='1'){
            docfile<<left<<setw(20)<<bienso<<setw(20)<<"| Ve C.N thang"<<"| "<<time_in_life()<<std::endl;
        } else if (loaixe=='2'){
            docfile<<left<<setw(20)<<bienso<<setw(20)<<"| Ve C.N quy"<<"| "<<time_in_life()<<std::endl;
        }
        docfile.close();
    }

    public:
   
    void xu_li(){
        IOtaikhoan();
        insert_map_user();
        find_service();
    }
};