#include <iostream>
#include <boost/scoped_ptr.hpp>

int main() {

    std::cout << "test" << std::endl; 
    boost::scoped_ptr<int> p {new int{100}};
    std::cout << *p.get() << '\n';
}
