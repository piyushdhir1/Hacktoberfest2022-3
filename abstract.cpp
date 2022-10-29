#include<iostream>
using namespace std;
class Sample_Class {
int a = 5;
public:
virtual void sample_func() = 0;
void print_func() {
cout << a;
}
};
class Derived_Class : public Sample_Class {
public:
void sample_func() {
cout << "pure virtual function is implemented";
}
};
int main() {
Derived_Class d_object;
d_object.sample_func();
}
