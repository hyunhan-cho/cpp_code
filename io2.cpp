//파일울 복사하는 프로그램

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    //파일을 복사
    //(1) 파일을 읽어와야 함
    ifstream src(argv[1], ios::binary);
    ofstream dst(argv[2], ios::binary);

    dst << src.rdbuf();
    dst.close();

    return 0;
}

