#ifndef CSDL_INCLUDED
#define CSDL_INCLUDED

#include <string>

/*
 * This class is used to read and store data
 * from input of which format is specified in 
 * problem statement. Therefore, this cannot 
 * be used to get data from a general input file.
 *
 * The constraints here are:
 * 1) There is no missing value.
 * 2) Each value of the database is a character 
 *    (even classes).
 * 3) Each value in a row is separated by ','.
 * 4) The first column of the database is class, 
 *    and other columns are features.
 * 5) The database is not empty.
 */

namespace NguyenQuocHuy {
    const char DELIMITER = ',';

    class CSDL {
    private:
        static std::string tachChuoi(const std::string &dong);

        bool khongBiThieu(const std::string &dong) const;
        void layMetaData(const char* tenFile);
        void ganDuLieu(const std::string &duLieuDong, int chiSoDong);
    public:
        char* duLieu;
        char* lop;
        int soThuocTinh;
        int soDong;

        CSDL(const char* tenFile);
        char* layDiaChiDongTrongDuLieu(int chiSoDong) const;
        char layThuocTinhCuaDong(int chiSoDong, int chiSoThuocTinh) const;
        char layLopCuaDong(int chiSoDong) const;
        ~CSDL();
    };

}

#endif
