#include <fstream>

using namespace std;

int main() // 程序从这里开始运行
{
    ofstream SaveFile("cpp - home.txt");
    SaveFile << "Hello World, from www.cpp - home.com and Loobian !";
    SaveFile.close();
    return 0;
}