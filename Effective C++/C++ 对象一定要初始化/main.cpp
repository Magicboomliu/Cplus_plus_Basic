#include<iostream>
using namespace std;
#include<vector>

// C++ 的任何对象，在调用之前，都建议进行初始化操作。反正core dump error.(Linux)
// 知识点1： 不要混淆赋值（assignments）和初始化（initialized）
class Student{
public:
 ~Student(){};
 Student(const char* name,const int age, const int id){
    StudentName = name;
    StudentAge = age;
    StudentId = id;                           // 这些是赋值操作，并非初始化,不是C++ 最好的实践，初始化发生在构造函数调用defult 方法之前。
 }
 private:
    const char* StudentName;
    int StudentAge;
    int StudentId;
};
// 使用成员初始列的方式，可以在调用构造函数前，进行初始化操作并且赋值，提高效率
class Student_new{
public:
    Student_new(const char* name,const int age, const int id):
    StudentName(name),
    StudentAge(age),
    StudentId(id)
    {            }   // 此时，构造函数内部不需要在进行赋值，  
 private:
    const char* StudentName;
    int StudentAge;
    int StudentId;
};

int main(int argc, char const *argv[])
{
  Student liusan("Liu Zihua",24, 006);
  Student_new zihuasan("Zihua Liu", 24,666);
    return 0;
}
