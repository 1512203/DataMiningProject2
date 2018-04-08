#ifndef NAIVEBAYESCLASSIFIER_INCLUDED
#define NAIVEBAYESCLASSIFIER_INCLUDED

#include "CSDL.h"
#include <map>
#include <set>
#include <string>

namespace NguyenQuocHuy {
    class NaiveBayesClassifier {
    private:
        void 
        tinhTruocMotSoThu();

        void
        sapXepTheoLop();

        void 
        tinhXacSuatLop();

        CSDL* csdl;
        int* viTriTheoLop;
        std::map<char, double> xacSuatLop;   // xacSuatLop(c): xac suat xuat hien lop c
    public:
        NaiveBayesClassifier(CSDL* _csdl);
        char phanLop(std::string thuocTinh);
        ~NaiveBayesClassifier();
    };
}

#endif
