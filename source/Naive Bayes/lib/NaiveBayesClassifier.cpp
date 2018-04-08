#include "NaiveBayesClassifier.h"
#include "SortingSupport.h"
#include <new>
#include <algorithm>
#include <iterator>

namespace NguyenQuocHuy {
    void 
    NaiveBayesClassifier::sapXepTheoLop() {
        for (int i = 0; i < this->csdl->soDong; ++i)
            this->viTriTheoLop[i] = i;
        sapXepTheoKhoa(this->csdl->soDong, this->viTriTheoLop, this->csdl->lop);
    }

    void 
    NaiveBayesClassifier::tinhXacSuatLop() {
        this->sapXepTheoLop();
        for (int l = 0, r = 1; l < this->csdl->soDong; l = r) {
            char c = this->csdl->lop[this->viTriTheoLop[l]];
            for (r = l+1; 
                    r < this->csdl->soDong && this->csdl->lop[this->viTriTheoLop[r]] == c; 
                    ++r); 
            this->xacSuatLop[c] = double(r-l) / this->csdl->soDong;
        }
    }

    void
    NaiveBayesClassifier::tinhTruocMotSoThu() {
        this->tinhXacSuatLop();
    }

    NaiveBayesClassifier::NaiveBayesClassifier(CSDL* _csdl) {
        this->csdl = _csdl;
        this->viTriTheoLop = new int[this->csdl->soDong];
        this->tinhTruocMotSoThu();
    }

    char 
    NaiveBayesClassifier::phanLop(std::string thuocTinh) {
        char ketQua = '\0';
        double xacSuatKetQua = 0.0;
        for (int l = 0, r = 1; l < this->csdl->soDong; l = r) {
            char c = this->csdl->lop[this->viTriTheoLop[l]];
            for (r = l+1; 
                    r < this->csdl->soDong && this->csdl->lop[this->viTriTheoLop[r]] == c; 
                    ++r); 

            double xacSuatChonLop = 1.0;
            for (int j = 0; j < this->csdl->soThuocTinh; ++j) {
                int soDongCoThuocTinhGiongDuLieu = 0;
                for (int i = l; i < r; ++i) 
                    if (this->csdl->duLieu[i * this->csdl->soThuocTinh + j] == thuocTinh[j]) 
                        ++soDongCoThuocTinhGiongDuLieu;
                xacSuatChonLop *= double(soDongCoThuocTinhGiongDuLieu) / (r-l);
            }
            if (xacSuatChonLop > xacSuatKetQua) {
                xacSuatKetQua = xacSuatChonLop;
                ketQua = c;
            }
        }
        return ketQua;
    }

    NaiveBayesClassifier::~NaiveBayesClassifier() {
        delete[] this->viTriTheoLop;
    }
}
