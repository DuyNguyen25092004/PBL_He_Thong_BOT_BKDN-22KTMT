#pragma once
#include<bits/stdc++.h>


std::fstream docfile;

void TrangChu_Display(){
    std::cout<<"                    TRA CUU VE THONG HANH                    "<<std::endl;
    std::cout<<" ___________________________________________________________ "<<std::endl;
    std::cout<<"|                                                           |"<<std::endl;
    std::cout<<"|    1.Dang nhap                                            |"<<std::endl;
    std::cout<<"|    2.Xem tong thu nhap (Hyper Administrator)              |"<<std::endl;
    std::cout<<"|    3.Thoat                                                |"<<std::endl;
    std::cout<<"|___________________________________________________________|"<<std::endl;
    std::cout<<"\t => Hay chon tu 1->2: ";
}

void Login_Display(){
    std::cout<<"                         DANG NHAP                           "<<std::endl;
    std::cout<<" ___________________________________________________________ "<<std::endl;
    std::cout<<"|                                                           |"<<std::endl;
    std::cout<<"|    So dien thoai:                                         |"<<std::endl;
    std::cout<<"|    Mat khau:                                              |"<<std::endl;
    std::cout<<"|___________________________________________________________|"<<std::endl;
}

void Admin_Diplay(){
    std::cout<<"                          TRANG CHU                          "<<std::endl;
    std::cout<<" ___________________________________________________________ "<<std::endl;
    std::cout<<"|                                                           |"<<std::endl;
    std::cout<<"|    1. Tra cuu ve thong hanh                               |"<<std::endl;// tra cuu ve thong hanh
    std::cout<<"|    2. Tra Cuu Thong Tin Va Sua Doi                        |"<<std::endl;// ve mot luot
    std::cout<<"|    3. Tong ket ca va dang xuat                            |"<<std::endl;
    std::cout<<"|___________________________________________________________|"<<std::endl;
    std::cout<<"\t => Hay chon tu 1->3: ";
}
    
void Admin_Display_1(){
    std::cout<<"                    TRA CUU VE THONG HANH                    "<<std::endl;
    std::cout<<" ___________________________________________________________ "<<std::endl;
    std::cout<<"|                                                           |"<<std::endl;
    std::cout<<"|    Nhap bien so cua xe:                                   |"<<std::endl;
    std::cout<<"|___________________________________________________________|"<<std::endl;
}

void Admin_Display_2(){
    std::cout<<"                           LOAI XE                           "<<std::endl;
    std::cout<<" ___________________________________________________________ "<<std::endl;
    std::cout<<"|                                                           |"<<std::endl;
    std::cout<<"|        1.Xe ca nhan                                       |"<<std::endl;
    std::cout<<"|        2.Xe kinh doanh                                    |"<<std::endl;
    std::cout<<"|        3. Quay ve TRANG CHU                               |"<<std::endl;
    std::cout<<"|___________________________________________________________|"<<std::endl;
    std::cout<<"\t => Hay chon tu 1->3: ";
}

void TrangChu_Display_2(){
    std::cout<<"                        TONG THU NHAP                        "<<std::endl;
    std::cout<<" ___________________________________________________________ "<<std::endl;
    std::cout<<"|                                                           |"<<std::endl;
    std::cout<<"|    PASSWORD:                                              |"<<std::endl;
    std::cout<<"|___________________________________________________________|"<<std::endl;
}

void Xe_Dich_Vu_Display(){
        std::cout<<"                          XE CA NHAN                          "<<std::endl;
        std::cout<<" ____________________________________________________________ "<<std::endl;
        std::cout<<"|                                                            |"<<std::endl;
        std::cout<<"|         1. Xe duoi 12 cho ngoi                             |"<<std::endl;
        std::cout<<"|         2. Xe 12-30 cho ngoi                               |"<<std::endl;
        std::cout<<"|         3. Xe tren 30 cho ngoi                             |"<<std::endl;
        std::cout<<"|         4. xe buyt cong cong                               |"<<std::endl;
        std::cout<<"|         5. Quay ve TRANG CHU                               |"<<std::endl;
        std::cout<<"|____________________________________________________________|"<<std::endl;
        std::cout<<"\t => Hay chon tu 1->5: ";
}

void Xe_Van_Tai_Display(){
        std::cout<<"                        XE KINH DOANH                         "<<std::endl;
        std::cout<<" ____________________________________________________________ "<<std::endl;
        std::cout<<"|                                                            |"<<std::endl;
        std::cout<<"|         1. Xe tai trong duoi 2 tan                         |"<<std::endl;
        std::cout<<"|         2. Xe tai trong 2-4 tan                            |"<<std::endl;
        std::cout<<"|         3. Xe tai trong 4-10 tan                           |"<<std::endl;
        std::cout<<"|         4. Xe tai trong 10-18 tan                          |"<<std::endl;
        std::cout<<"|         5. Xe tai trong tren 18 tan                        |"<<std::endl;
        std::cout<<"|         6. Xe dau keo (chi co dau keo)                     |"<<std::endl;
        std::cout<<"|         7. Container 20 feet                               |"<<std::endl;
        std::cout<<"|         8. Container 40 feet                               |"<<std::endl;
        std::cout<<"|         9. Quay ve TRANG CHU                               |"<<std::endl;
        std::cout<<"|____________________________________________________________|"<<std::endl;
        std::cout<<"\t => Hay chon tu 1->9: ";
}


