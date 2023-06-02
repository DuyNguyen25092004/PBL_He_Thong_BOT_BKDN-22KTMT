#pragma once
#include <vector>
#include "Vehicle.cpp"
enum type_service{
khong,
xe_ca_nhan_thang,
xe_ca_nhan_quy,
xe_kinh_doanh_thang,
xe_kinh_doanh_quy,
xe_nha_nuoc_service
};


class Account{
protected:  
std::  vector<std::pair<Account,std::pair<std::string,std::pair<std::string,std::pair<Vehicle,type_service> > > > > account_main;   // tài khoản - mk / tên / cccd/ loại xe / loại dịch vụ
public:
char TaiKhoan [20];
char MatKhau [20];
};
