#include "SortingSupport.h"
#include <algorithm>

namespace NguyenQuocHuy {
    void
    sapXepTheoKhoa(int kichThuocMang, int* mangMuonSap, char* khoa) {
        std::sort(mangMuonSap, mangMuonSap+kichThuocMang, KhoaSoSanh(khoa));
    }
}
