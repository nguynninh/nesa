#include <iostream>

using namespace std;

//ham chuyen moi ky tu ve ky tu thuong
char lower(char chr) {
    if ('A' <= chr && chr <= 'Z') {
        chr = chr + ((int) ('a') - (int) ('A'));
    }
    return chr;
}

//ham chuyen moi ky tu ve ky tu hoa
char upper(char chr) {
    if ('a' <= chr && chr <= 'z') {
        chr = chr - ((int) ('a') - (int) ('A'));
    }
    return chr;
}

//ham chuyen chuoi ve tat ca viet thuong
string tolower(string text) {
    string text_to_lower = "";
    for (int i = 0; i < text.size(); ++i) {
        text_to_lower.push_back(lower(text[i]));
    }
}

//Ham chuyen chuoi ve tat ca viet hoa
string toupper(string text) {
    string text_to_upper = "";
    for (int i = 0; i < text.size(); ++i) {
        text_to_upper.push_back(upper(text[i]));
    }
    return text_to_upper;
}

void menu() {
    cout << "========MENU========" << endl;
    cout << "X. Xem tai khoan" << endl;
    cout << "G. Gui tien vao" << endl;
    cout << "R. Rut tien ra" << endl;
    cout << "K. Ket thuc" << endl;
    cout << "====================" << endl;
}

void xem_tai_khoan(double *money) {
    cout << "Thong tin ve tai khoan cua ban" << endl;
    cout << " So du : " << *money << "VND" << endl;
}

void gui_tien_vao(double *money) {
    cout << "Gui tien vao tai khoan" << endl;
    cout << " Hay nhap so tien muon gui : ";
    double tien_gui;
    cin >> tien_gui;
    *money += tien_gui;
    cout << " Ban da gui thanh cong" << endl;
    cout << " So du hien tai la " << *money << endl;
}

void rut_tien(double *money) {
    cout << "Rut tien ra khoi tai khoan" << endl;
    cout << " Hay nhap so tien muon rut : ";
    double tien_rut;
    cin >> tien_rut;
    if (*money >= tien_rut) {
        *money -= tien_rut;
        cout << "Ban da rut tien thanh cong" << endl;
        cout << " So du hien tai la " << *money << endl;
    } else {
        cout << "So du khong kha dung! " << endl;
    }
}

void ket_thuc() {
    cout << "Ban co chac chan muon ket thuc phien giao dich khong(Y/N) : ";
    char dung_phien;
    cin >> dung_phien;
    if (lower(dung_phien) == 'y') {
        cout << " Xin chao va hen gap lai " << endl;
        exit(0);
    }
}

void dieu_huong_lua_chon(double *money) {
    menu();
    cout << "=>Lua chon cua ban la : ";
    char lua_chon;
    cin >> lua_chon;
    switch (lower(lua_chon)) {
        case 'x':
            xem_tai_khoan(money);
            break;
        case 'g':
            gui_tien_vao(money);
            break;
        case 'r':
            rut_tien(money);
            break;
        case 'k':
            ket_thuc();
            break;
        default:
            cout << "!= Ban da chon sai" << endl;
    }
}


int main() {
    double money = 0;
    while (true) {
        dieu_huong_lua_chon(&money);
    }
}
