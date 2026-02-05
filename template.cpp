#include<iostream>
using namespace std;

template <class T>

class arth{
    private :
    T a;
    T b;
    public:
    arth(T a , T b);
    T sum();
    T sub();
};
template <class T>

arth<T>::arth(T a , T b){
    this->a = a;
    this->b = b;
}
template <class T>
T arth<T>::sub(){
    T c;
    c = a - b;
    return c;
}
template <class T>
T arth<T>::sum(){
    T c;
    c = a + b;
    return c;
}

int main(){
    arth<int> arr(10,5);
    cout<<arr.sum();
    return 0;
}
