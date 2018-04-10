#ifndef KNNCLASSIFIER_INCLUDED
#define KNNCLASSIFIER_INCLUDED

#include "CSDL.h"
#include <string>

namespace NguyenQuocHuy {
    class kNNClassifier {
    private:
        static int khoangCach(const char* u, const std::string &v);

        CSDL* csdl;
        int k;
    public:
        kNNClassifier(CSDL* _csdl, int _k);
        char phanLop(std::string thuocTinh);
        ~kNNClassifier();
    };
}

#endif
