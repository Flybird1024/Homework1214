#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
    cout << "選擇題目\f(\f輸入數字\f1、2、3、4\f)" << "\n\n"
        << "靜態陣列" << '\n'
        << "[1]\fint" << '\n'
        << "[2]\fchar" << "\n\n"
        << "動態陣列" << '\n'
        << "[3]\fvector" << '\n'
        << "[4]\flist" << "\n\n";
    int choose;
    cout << "題目\f-\f";
    cin >> choose;
    cout << '\n';
    switch (choose)
    {
    case 1: {
        cout << "說明 :" << "\n\n"
            << "建立 int 陣列 1 ~ 5" << '\n'
            << "輸出 [2] 的值" << "\n\n" << "以下為題目要求輸出 :" << "\n\n";
        // 建立 int 陣列 1 ~ 5
        int int_array[5] = { 1,2,3,4,5 };
        // 輸出[2]的值
        cout << "[2] 的值為 > " << int_array[2] << endl;
        break;
    }
    case 2: {
        cout << "說明 :" << "\n\n"
            << "建立 char 陣列 A ~ E" << '\n'
            << "輸出 [4] 的值" << "\n\n" << "以下為題目要求輸出 :" << "\n\n";
        // 建立 char 陣列 A ~E
        char cha_array[5] = { 'A','B','C','D','E' };
        // 輸出 [4] 的值
        cout << "[4] 的值為 > " << cha_array[4] << endl;
        break;
    }
    case 3: {
        cout << "說明\f:" << "\n\n"
            << "vector<int> 初始 1 ~ 5" << '\n'
            << "新增 6 ~ 10" << "\n"
            << "輸出 [1]、[9]、[10]、[15] 的值" << "\n\n"
            << "以下為題目要求輸出\f:" << "\n\n";
        // vector<int> 初始 1 ~ 5
        vector<int> vector = { 1,2,3,4,5 };
        // 新增 6 ~ 10
        vector.push_back(6);
        vector.push_back(7);
        vector.push_back(8);
        vector.push_back(9);
        vector.push_back(10);
        vector.push_back(11);
        // 增加至 [15] 的值
        vector.push_back(12);
        vector.push_back(13);
        vector.push_back(14);
        vector.push_back(15);
        vector.push_back(16);
        // 輸出 [1]、[9]、[10]、[15] 的值
        cout << "[1] 的值為 > " << vector[1] << '\n'
            << "[9] 的值為 > " << vector[9] << '\n'
            << "[10] 的值為 > " << vector[10] << '\n'
            << "[15] 的值為 > " << vector[15] << '\n';
        break;
    }
    case 4: {
        cout << "說明\f:" << "\n\n"
            << "list<char> 初始 1 ~ 5" << '\n'
            << "新增 6 ~ 10" << "\n"
            << "輸出頭、尾部的值" << "\n\n"
            << "以下為題目要求輸出\f:" << "\n\n";
        // list<char> 初始 1 ~ 5
        list<int> list1 = { 1,2,3,4,5 };
        // 新增 6 ~ 10
        list1.push_front(6);
        list1.push_front(7);
        list1.push_front(8);
        list1.push_front(9);
        list1.push_front(10);
        // 輸出頭、尾部的值
        cout << "頭部的值為 > " << *list1.begin() << '\n';
        cout << "尾部的值為 > " << list1.back() << '\n';
        break;
    }
    default:
        cout << "查無此題目" << '\n';
        break;
    }
    return 0;
}