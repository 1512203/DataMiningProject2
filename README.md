# Bài tập Lab #2 - Môn Data Mining

## Nguời cài đặt:
* Họ và tên: Nguyễn Quốc Huy
* Truờng Đại học Khoa học tự nhiên TP. Hồ Chí Minh
* Lớp 15CNTN

## Yêu cầu hệ thống:
* Hệ điều hành Ubuntu 16.04
* Hỗ trợ g++ 5.4.0 (c++11)
* Hỗ trợ Makefile

## Cấu trúc tập tin:
```
./
|-- README.md
|-- data/
|   |-- test.csv
|   |-- train.csv
|-- README.md
|-- source/
|   |-- dependency/
|   |   |-- CSDL.cpp
|   |   |-- CSDL.h
|   |   |-- Makefile
|   |   |-- SortingSupport.cpp
|   |   |-- SortingSupport.h
|   |-- kNN/
|   |   |-- BuildAndRun.sh
|   |   |-- Clean.sh
|   |   |-- lib/
|   |   |   |-- Makefile
|   |   |   |-- kNNClassifier.cpp
|   |   |   |-- kNNClassifier.h
|   |   |-- Makefile
|   |   |-- Makefile.depend
|   |   |-- src/
|   |   |   |-- main.cpp
|   |   |   |-- Makefile
|   |-- Naive Bayes/
|   |   |-- BuildAndRun.sh
|   |   |-- Clean.sh
|   |   |-- lib/
|   |   |   |-- Makefile
|   |   |   |-- NaiveBayesClassifier.cpp
|   |   |   |-- NaiveBayesClassifier.h
|   |   |-- Makefile
|   |   |-- Makefile.depend
|   |   |-- src/
|   |   |   |-- main.cpp
|   |   |   |-- Makefile
```

## Huớng dẫn cách chạy:

### Naive Bayes:
* Trong terminal, change dir đến thư mục ```source/Naive Bayes/```
* Gõ ```bash BuildAndRun.sh```
* Kết quả phân lớp sẽ đuợc lưu trong tập tin ```result.txt``` (cũng trong thư mục ```source/Naive Bayes/```)

### kNN:
* Trong terminal, change dir đến thư mục ```source/kNN/```
* Gõ ```bash BuildAndRun.sh```
* Kết quả phân lớp sẽ đuợc lưu trong tập tin ```result.txt``` (cũng trong thư mục ```source/kNN/```)


## Bộ dữ liệu:
Bộ dữ liệu sẽ đuợc đặt trong thư mục ```data```, cùng cấp với thư mục ```source```, gồm 2 file ```train.csv``` và ```data.csv```. Thư mục ```data``` này sẽ không đuợc đưa lên git.

## Note:
Although README.md, names of classes and variables are in 
Vietnamese, the comments in code are written in English. 
These comments are to make sure that anyone who may use 
this code in the future will be able to use it correctly. 
