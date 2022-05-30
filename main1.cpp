// https://www.youtube.com/watch?v=e2LMAgoqY_k
// g++ -o main main1.cpp -std=c++2a

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "Constructor MyClass()" << endl;
    }
    ~MyClass()
    {
        cout << "Destructor MyClass()" << endl;
    }
};

int main()
{
    // unique_ptr<int> unPtr1 = make_unique<int>(25);
    // // unique_ptr<int> unPtr2 = unPtr1; // error: cannot assign to 'unPtr2' because it is a unique_ptr
    // unique_ptr<int> unPtr2 = move(unPtr1);

    // // cout << unPtr1 << endl;

    // cout << *unPtr1 << endl; // error
    // cout << *unPtr2 << endl;
    // {
    // unique_ptr<MyClass> unPtr1 = make_unique<MyClass>();
    // }

    /**
     * @brief shared_ptr
     *
     */

    // shared_ptr<MyClass> shPtr1 = make_shared<MyClass>();
    // cout << "shPtr1.use_count() = " << shPtr1.use_count() << endl;
    // shared_ptr<MyClass> shPtr2 = shPtr1;
    // cout << "shPtr1.use_count() = " << shPtr1.use_count() << endl;
    // cout << "shPtr2.use_count() = " << shPtr2.use_count() << endl;
    // // {
    //     shared_ptr<MyClass> shPtr3 = shPtr2;
    //     cout << "shPtr1.use_count() = " << shPtr1.use_count() << endl;
    //     cout << "shPtr2.use_count() = " << shPtr2.use_count() << endl;
    //     cout << "shPtr3.use_count() = " << shPtr3.use_count() << endl;
    // // }

    /**
     * @brief weak_ptr
     * 
     */


    weak_ptr<MyClass> wePtr1 ;

    {
        shared_ptr<MyClass> shPtr1 = make_shared<MyClass>();
        wePtr1 = shPtr1;
    }
}