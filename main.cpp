#include <iostream>
using namespace std;

void fun1();
void fun2();
void fun3();

int main() {
   // fun1();
    fun2();
   // fun3();
}

void fun1(){
    for (int i = 1; i < 10; i++){
        printf("a");
        cout<<endl;

    }
}

void fun2(){
    {
        int i, j;
        for (i = 1; i < 10; i++){
            for (j = 1; j <= i; j++){
                cout << j << " × " << i << " = " << i *j << "  ";
            }
            cout << endl<<endl;
        }
    }
}

void fun3(){
    // 局部变量声明
    int a = 10;

    // while 循环执行
    while( a < 20 )
    {
        cout << "a 的值：" << a << endl;
        a++;
    }


}