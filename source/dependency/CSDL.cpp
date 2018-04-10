#include "CSDL.h"
#include <string>
#include <fstream>
#include <new>
#include <cstddef>

namespace NguyenQuocHuy {

    std::string CSDL::tachChuoi(const std::string &dong) {

        std::string ketQua = "";
        for (int i = 0, len = dong.length(); i < len; ++i) 
            if (dong[i] != DELIMITER) 
                ketQua += dong[i];
        return ketQua;

    }



    bool CSDL::khongBiThieu(const std::string &dong) const {

        return int(tachChuoi(dong).length()) == this->soThuocTinh + 1;

    }



    void CSDL::layMetaData(const char* tenFile) {

        std::ifstream docFile(tenFile);
        std::string dong;
        getline(docFile, dong);
        this->soThuocTinh = tachChuoi(dong).length() - 1;
        for (this->soDong = 1; std::getline(docFile, dong); ) 
            if (this->khongBiThieu(dong)) 
                ++this->soDong;
        docFile.close();

    }



    char* CSDL::layDiaChiDongTrongDuLieu(int chiSoDong) const {

        return this->duLieu + (chiSoDong * this->soThuocTinh);

    }



    void CSDL::ganDuLieu(const std::string &duLieuDong, int chiSoDong) {

        char* dongHienTai = this->layDiaChiDongTrongDuLieu(chiSoDong);
        for (int i = 0, sz = duLieuDong.size(); i < sz; ++i)
            dongHienTai[i] = duLieuDong[i+1];
        this->lop[chiSoDong] = duLieuDong[0];

    }



    char CSDL::layThuocTinhCuaDong(int chiSoDong, int chiSoThuocTinh) const {

        char* dongHienTai = this->layDiaChiDongTrongDuLieu(chiSoDong);
        return dongHienTai[chiSoThuocTinh];

    }



    CSDL::CSDL(const char* tenFile) {

        this->soDong = 0;
        this->soThuocTinh = 0;
        this->duLieu = NULL;
        this->lop = NULL;
        this->layMetaData(tenFile);

        this->duLieu = new char[this->soDong * this->soThuocTinh];
        this->lop = new char[this->soDong];

        std::ifstream docFile(tenFile);
        std::string dong;
        for (int i = 0; i < this->soDong; ++i) {
            std::getline(docFile, dong);
            std::string duLieuDong = tachChuoi(dong);
            this->ganDuLieu(duLieuDong, i);
        }
        docFile.close();

    }



    char CSDL::layLopCuaDong(int chiSoDong) const {

        return this->lop[chiSoDong];

    }



    CSDL::~CSDL() {

        delete[] this->duLieu;
        delete[] this->lop;

    }

}
