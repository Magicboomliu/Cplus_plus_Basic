#include<iostream>
using namespace std;
#include<vector>

// const , enum 在类内的使用， 使用inline 函数防止资源被调用频繁
class Person{
public:
// 从 C++ 11开始 ，类内部的静态数据成员必须为常量 ： static const
    static const int nums = 100;  // 类内实现
    static const double doublenum;  // 类内部声明
// 枚举的数据类型也可以当做类内的const 类型来使用。    
enum{
    nums_1 =6,
    nums_2 =7
};
  enum period{
      YOUNG,  // 默认为0
      MIDDLE,  // 默认为1
      OLD           // 默认为3
  };

};
const double Person::doublenum = 200.0; // 类外部实现，注意需要加入 const



// const 作用于成员函数： 1.修饰参数  2修饰返回值  3 修饰函数本身
class constTest{
public: 
// 返回值是一个const,函数本身不是const, 可以访问const和non-const对象
        const void changeSomething(){
          types =2;
          cout<<number<<endl;  
          cout<<types<<endl;
        }

// const 的成员函数， 之所以设计const成员函数，代表这个成员函数只能作用在const对象上.承诺不改变成员函数的逻辑状态。
// non-const 成员函数不能承诺，所以不能在const 成员函数内调用non-const成员函数
    void constChangeSomething() const{
        cout<<number<<endl;     // 可以访问const对象
        cout<<mutable_type<<endl; // const成员函数可以访问、修改 mutable对象
        mutable_type = 200;
        // cout<<types<<endl;     // InValid : 不能访问非const对象
        //  changeSomething();   // Invalid: 不能在const 成员函数内调用non-const成员函数
     };

private:
        const double number = 100; // const 变量
        int types =0;  // non-const 变量

        mutable  int mutable_type =0; // non-const 的 mutable对象，总是可以被修改，即便实在const 成员函数中。

};


int main(int argc, char const *argv[])
{
    // Condition One:  CONST 修饰常量
    const double pi = 3.1415926;  // 这里Pi是一个const double, 不能被修改
   
    const char* term = "ratio of a circle";  // 这里term指针指向的量为常量， 此常量本身不能更改，也就是不能使用 *term = "s"的方式
    /************* Test*********************/
    cout<<term<<endl; // ratio of a circle
    cout<<*term<<endl;  // r
    cout<<*(term+1)<<endl; // a
    // 允许进行此操作
    term = term +1;
    cout<<term<<endl; // atio of a circle
    term = "sdasdaas";  // 可以改变指针的指向
    cout<<term<<endl;  // sdasdass 
   // *term = 'a'; // 不允许这样的操作，*term 代表term指向的常量本身， 此常量本身不能被修改
  cout<<"______________________________________________________________"<<endl;
  /************* END********************/
   
   // 这个代表这个指针本身是const 指针，指针不能改变指向，但是指针指向的常量本身不是const，可以修改。
 char* const newpi ="ratio of circle";   // 注意： ISO C++ forbids converting a string constant to ‘char*’ [-Wwrite-strings]
/************* Test*******************/
cout<<newpi<<endl; // ratio of circle
// *newpi = 'q';
cout<<*newpi<<endl;
//newpi = "ssdsda"; // InValid！！不能更改 newpi的指向 
  /************* END********************/

  const char* const constpi = "ratio of circle"; // 指针和指针的指向常量都是const类型，真正意义上只能参看和遍历，不能修改
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

   Person p;
   // 以下的方式都可以访问
   cout<<Person::nums<<endl;
   cout<<Person::nums_1<<endl;
   cout<<Person::nums_2<<endl;
   cout<<p.nums_2<<endl;
   cout<<p.nums<<endl;
   cout<<Person::YOUNG<<endl; 

   constTest ct;
   ct.changeSomething();


   

   
    return 0;
}
