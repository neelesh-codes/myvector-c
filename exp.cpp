#include <iostream>
#include <vector>

namespace my_std
{
    template <typename vector_type>
    class MyVector
    {
        vector_type data;

    public:
        MyVector() : data(10){};

        void getVector()
        {
            std::cout << data << std::endl;
        }
    };
}

int main(int argc, char const *argv[])
{
    std::vector<int> v = {1, 2, 3, 4};

    v.push_back(10);
    v.push_back(20);

    for (auto i : v)
    {
        std::cout << i << std::endl;
    }


    my_std::MyVector<int> myv;
    myv.getVector();

    return 0;
}
