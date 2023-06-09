                                    -------------- HỆ THỐNG TRẠM THU PHÍ BOT --------------

1. GIỚI THIỆU
- Đây là dự án đầu tư xây dựng công trình, tổ chức quản lý và kinh doanh có thu phí các dịch vụ sử dụng công trình với thời hạn dự tính thu hồi đủ vốn và thu được lợi nhuận.

2. ĐIỀU KIỆN TIÊN QUYẾT
-Trước khi bạn tiếp tục, hãy chắc rằng bạn đã cài phiên bản mới nhất của C++ và có 1 bộ thông dịch cho nó

3. CÁCH CÀI ĐẶT
- Hiện nay có rất nhiều bộ thông dịch phổ biến như: Vscode, DevC++, Codeblock,...
- Nếu bạn muốn cài bộ thông dịch Vscode, vui lòng truy cập vào đường dẫn bên dưới:
        https://code.visualstudio.com/docs/languages/cpp

4. CÁCH SỬ DỤNG
- Hệ thống bao gồm 2 hệ thống: hệ thống dành cho nhân viên(admin) và dành cho Người dùng
- Để có thể chạy file hệ thống admin hoặc user, bạn vào mục code-> click vào file Admin/User -> click vào file he_thong_admin/user.exe 
    * Admin: Có những mục bao gồm quản lí và thay đổi thông tin, tra cứu vé thông hành khi đi qua trạm , tổng kết ca làm, kiểm tra tổng doanh thu (chỉ dành cho quản lí)
    
        ![image](https://github.com/DuyNguyen25092004/PBL_He_Thong_BOT_BKDN-22KTMT2/assets/121710594/1c589504-aec8-4a4e-87b1-c612eb172a96)

        - Để có thể truy cập vào các mục trên thì bạn phải đăng nhập, và tài khoản chỉ có thể được cấp bởi các nhà quản lí
        - 
        ![image](https://github.com/DuyNguyen25092004/PBL_He_Thong_BOT_BKDN-22KTMT2/assets/121710594/d2c34697-740f-43cc-a3ab-ea25083be7c4)
        

        - Mục quản lí và thay đổi thông tin : để tra cứu thì bạn phải nhập căn cước công dân của người dùng, bạn sẽ có 2 lựa chọn đó là thay đổi thông tin hoặc là trở lại phần tra cứu thông tin. 
        
        ![image](https://github.com/DuyNguyen25092004/PBL_He_Thong_BOT_BKDN-22KTMT2/assets/121710594/5fe45bfe-11f4-4dfe-88b1-3dc340cbc3d2)

  
                 Lưu ý : riêng mục các loại dịch vụ thì nhân viên không thể thay đổi.
        - Mục tra cứu vé thông hành : để có thể tra cứu các loại xe và các loại dịch vụ mà người dùng đã đăng kí thì bạn phải nhập biển số xe của người đó khi đi qua trạm, sau đó màn hình sẽ hiện lên loại dịch vụ tương ứng và số tiền tương ứng cần thu.
        - 
        ![image](https://github.com/DuyNguyen25092004/PBL_He_Thong_BOT_BKDN-22KTMT2/assets/121710594/b8a4fe7a-8774-43b4-ac89-712917a89142)


        - Sau khi hết ca làm thì nhân viên sẽ phải bấm vào mục tổng kết ca làm và đăng xuất để lưu lại số tiền và lịch sử mà xe đã đi qua.

        ![image](https://github.com/DuyNguyen25092004/PBL_He_Thong_BOT_BKDN-22KTMT2/assets/121710594/5d380192-5415-4ad2-acc3-2cbde7f1a507)


           * Lưu ý: 
            + a) Nếu bạn muốn thoát khỏi mục tra cứu thì bạn hãy bấm kí tự "thoat" để có thể trở lại menu chính
            + b) Các mục lựa chọn ở các Menu thì không nên bấm kí tự vào vì nó sẽ sinh ra lỗi, chỉ nên bấm vào các số.
        
    * Người dùng: Có những mục cơ bản như Đăng nhập và Đăng kí tài khoản.
    * 
        ![image](https://github.com/DuyNguyen25092004/PBL_He_Thong_BOT_BKDN-22KTMT2/assets/121710594/10dbc23a-670a-4dd4-8f7a-6af523a47ba0)


        - Nếu bạn chưa có tài khoản thì hãy bấm phím [2] để đăng kí tài khoản:
            + tài khoản : yêu cầu bạn phải nhập CCCD để tiện cho việc ghi nhớ cũng như truy vấn thông tin tài khoản
            + Sau đó bạn nhập lần lượt từng mục : mật khẩu, tên người dùng, căn cước công dân.
        - Khi đã đăng kí tài khoản thì bạn vào mục đăng nhập để nhập tài khoản và mật khẩu của mình đã đăng kí trước đó.
        - Khi đăng nhập thành công thì bạn có thể xuất thông tin của mình để kiểm tra hoặc đăng kí các loại dịch vụ tương ứng với loại phương tiện của mình
           
         ![image](https://github.com/DuyNguyen25092004/PBL_He_Thong_BOT_BKDN-22KTMT2/assets/121710594/74cd4a62-52f6-406d-babb-f8d606c20639)

           
              * Lưu ý:
               + a) Khi bạn đăng kí tài khoản thành công, hệ thống sẽ tự động quy định xe của bạn là xe cá nhân, nếu bạn muốn thay đổi loại phương tiện của bạn thì hãy đến trụ sở và yêu cầu nhân viên thay đổi loại phương tiện của mình.
               + b) Các mục lựa chọn ở các Menu thì không nên bấm kí tự vào vì nó sẽ sinh ra lỗi, chỉ nên bấm vào các số.
               
5. CREDIT
* Các nguồn tài liệu tham khảo: 
    - https://nhatvien.com
    - https://stackoverflow.com
    - https://www.geeksforgeeks.org/c-plus-plus (STL)
    - https://www.w3schools.com/cpp/default.asp
    - https://luatvietnam.vn/linh-vuc-khac/bot-la-gi-883-91243-article.html // thông tin cần biết để thực hiện hệ thống 
* Cám ơn những người sau đây đã giúp chúng tôi hoàn thành dự án:
    - Thầy Nguyễn Duy Nhật viễn : Giáo viên hướng dẫn
    - Hoàng Văn Phi, Nguyễn Ngọc Lân : Thử nghiệm và đánh giá dự án
* Những người thực hiện dự án :
    - Trần Duy nguyên
    - Nguyễn Tấn Minh
    
6. CONTACT
 - Nếu bạn có ý tưởng hoặc tìm thấy bất kì lỗi nào trong hệ thống của chúng tôi. Xin hãy liên lạc với chúng tôi !
 * FaceBook:
    - Trần Duy Nguyên : https://www.facebook.com/fallcolll/
    - Nguyễn Tấn Minh : https://www.facebook.com/nguyen.tanminh.142
* Email:
    - Trần Duy Nguyên : duynguyen25092004@gmail.com
    - Nguyễn Tấn Minh : tanminh51nbn@icloud.com


                                 -------------- CÁM ƠN VÌ ĐÃ GHÉ THĂM DỰ ÁN CỦA CHÚNG TÔI --------------




