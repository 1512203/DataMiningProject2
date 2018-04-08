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
        sapXepTheoLop();

        CSDL* csdl;
        int* viTriTheoLop;
    public:
        NaiveBayesClassifier(CSDL* _csdl);
        char phanLop(std::string thuocTinh);
        ~NaiveBayesClassifier();
    };
}

#endif
