#include <iostream>

using namespace std;

auto contAdd = [](int initial, int addBy)
{
    return[initial, addBy]() mutable
    {
        return initial+= addBy;
    };

};


int main()
{
    auto mysol = contAdd(10, 10);
    int input;
    cout << "Add another 10 " << mysol() <<endl;
    cout << "Add another 10 " << mysol()<<endl;
    cout << "Add another 10 " << mysol()<<endl;
    cin >>  input;
    return 0;
}