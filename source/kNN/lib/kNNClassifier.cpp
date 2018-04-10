#include "kNNClassifier.h"

#include <queue>
#include <vector>
#include <utility>
#include <map>
#include <iterator>


namespace NguyenQuocHuy {

    kNNClassifier::kNNClassifier(CSDL* _csdl, int _k) {

        this->csdl = _csdl;
        this->k = _k;

    }



    int kNNClassifier::khoangCach(const char* u, const std::string &v) {

        int ketQua = 0;
        for (int i = 0, len = v.length(); i < len; ++i) 
            if (u[i] != v[i]) 
                ++ketQua;
        return ketQua;

    }



    char kNNClassifier::phanLop(std::string thuocTinh) {

        std::priority_queue < std::pair< int, int >, std::vector< std::pair< int, int > > > PQ;
        for (int i = 0; i < this->csdl->soDong; ++i) {
            char* diaChiDong = this->csdl->layDiaChiDongTrongDuLieu(i);
            int kCach = khoangCach(diaChiDong, thuocTinh);
            PQ.push(std::make_pair(kCach, i));

            while ((int)PQ.size() > this->k) {
                PQ.pop();
            }
        }

        std::map<int, int> demLop;
        while (!PQ.empty()) {
            std::pair<int, int> dongNay = PQ.top();
            demLop[this->csdl->layLopCuaDong(dongNay.second)] += 1;
            PQ.pop();
        }
        char c = '\0';
        int cnt = 0;
        for (std::map<int, int>::iterator it = demLop.begin(); it != demLop.end(); ++it) {
            if (it->second > cnt) {
                cnt = it->second;
                c = it->first;
            }
        }
        
        return c;
    }



    kNNClassifier::~kNNClassifier() {

    }

}
