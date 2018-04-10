#ifndef SORTINGSUPPORT_INCLUDED
#define SORTINGSUPPORT_INCLUDED

namespace NguyenQuocHuy {

    struct KhoaSoSanh {
        char* khoa;
        KhoaSoSanh(char* _khoa) {
            khoa = _khoa;
        }

        bool operator () (const int &x, const int &y) {
            return khoa[x] < khoa[y];
        }
    };

    void
    sapXepTheoKhoa(int kichThuocMang, int* mangMuonSap, char* khoa); 

}
#endif
