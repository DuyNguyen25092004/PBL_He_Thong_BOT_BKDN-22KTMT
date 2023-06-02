#include "GiaoDien.cpp"
#include "gotoxy.cpp"


class login{
    private:
    string sdt,mk;
    string time;
    int k;
    
    void sdt_mk_corrected(){
        string s_sdt,s_mk;
        docfile.open("../Admin/txt/AccountAdmin.txt",ios::in);
        if(docfile.is_open()){
            while (docfile>>s_sdt){
                if(s_sdt==sdt){
                    docfile>>s_mk;
                    if (s_mk==mk){
                        k=1;
                        break;
                    } else {
                        k=0;
                        break;
                    }
                } else {
                    k=0;
                }
            }  
        }
        docfile.close();
        start_save_history();
    }
    void start_save_history(){
        time=time_in_life();
        if(k==1){
        docfile.open(".../Admin/txt/LoginHistory.txt",ios::app);
        if(docfile.is_open()){
            docfile<<left<<setw(20)<<sdt<<time_in_life()<<endl;
        }
        docfile.close();

        docfile.open("../Admin/txt/PayHistory.txt",ios::app);
        if(docfile.is_open()){
            docfile<<left<<time<<endl<<"> Nguoi truc: "<<sdt<<endl;
        }
        docfile.close();
        }
    }

    public:
    login(){}
    void xu_li(){
        k=3;
        do{
            system("cls");
            Login_Display();
            if(k==0){
                cout<<"Nhap sai thong tin! Nhap lai!"<<endl;
            }
            gotoxy((short)20,(short)3); cin>>sdt;
            gotoxy((short)15,(short)4); cin>>mk;
            sdt_mk_corrected();
            cout<<endl;
        } while (k==0);
    }
    void end_save_history(){
        docfile.open("../Admin/txt/LoginHistory.txt",ios::app);
        if(docfile.is_open()){
            docfile<<left<<setw(20)<<"Lam den: "<<time_in_life()<<endl<<endl;
        }
        docfile.close();
    }
    string get_sdt(){
        return sdt;
    }
    int get_k(){
        return k;
    }
};


