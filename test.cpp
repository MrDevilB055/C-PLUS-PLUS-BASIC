//counting to 10 3 times using nested for loop
#include <iostream>
int main(){
    for(int i=1;i<=3;i++){
        for(int j=1;j<=10;j++){
            std::cout << j << ' ';
        }
        std::cout << std::endl;
    }
}
/*
namespace first{
    int y =68;
}
int main(){
    using namespace first;
    using std::cout;
    std::cout << y;   

}*/
