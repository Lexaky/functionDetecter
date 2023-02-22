#include <iostream>
#include <typeinfo>

using namespace std;

template <typename undefineType> class Variable {
private:
    undefineType value;
public:
    double hauntedTypeValue;
    Variable(undefineType enterValue); //haunt undefined type to hauntedType with double type
    undefineType setValue(undefineType newValue);
    void printValue();
    undefineType getValue();
    void hauntVariable(); // Change hauntedTypeValue
};

template <typename undefineType> Variable<undefineType>::Variable(undefineType enterValue)
{
    value = enterValue;
}

template <typename undefineType> undefineType Variable<undefineType>::setValue(undefineType newValue)
{
    value = newValue;
}

template <typename undefineType> void Variable<undefineType>::printValue()
{
    cout << value << endl;
}

template <typename undefineType> undefineType Variable<undefineType>::getValue()
{
    return value;
}

template <typename undefineType> void Variable<undefineType>::hauntVariable()
{
    switch(typeid(value).name())
    {
    case "double":
        hauntedTypeValue = value;
    default:
        hauntedTypeValue = 0.0;
    }
}

/*
class Statement : public Variable
{
private:
    bool sign;
    double value;
    double power;
    int systemNumber;
public:
    void setSign();
    void setValue();
    void setPower();
    void setSystemNumber();
    bool getSign();
    double getValue();
    double getPower();
    int getSystemNumber();
};
*/
int main()
{
    Variable<double> x(2.0);
    x.hauntVariable();
    x.printValue();
    x.setValue(31);
    x.printValue();
    return 0;
}
