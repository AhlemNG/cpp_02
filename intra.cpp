#include <iostream>

class Integer 
{
    public:
        Integer(int const n);
        ~Integer(void); //dest

        int getValue(void) const;

        // actual value of the instance's attribute is hidden: it's the left hand side
        // operqtor = update the actual value of the instance to the value in argument
        
        Integer & operator=(Integer const & rhs); //right hand side operateur d'assignation
        // operqtor = Actuql value oo the instance is never changed, that's why it's const
        // sends a copy of the instance
        Integer operator+(Integer const & rhs) const;
    
    private:
        int _n;
};

Integer::Integer(int const n): _n(n)
{
    std::cout << "constructor called with value " << _n << std::endl;
}

Integer::~Integer(void)
{
    std::cout << "destructor called with value " << _n << std::endl;
}

int Integer::getValue(void) const
{
    return(this->_n);
}

Integer & Integer::operator=(Integer const &rhs)
{
    std::cout << "Assignment operator called with " << this->_n;
    std::cout << " to " << rhs.getValue() << std::endl;
    this->_n = rhs.getValue();
    return (*this);
}

Integer  Integer::operator+(Integer const &rhs) const
{
    std::cout << "Addition operator called with " << this->_n;
    std::cout << " and " << rhs.getValue() << std::endl;
    return (Integer(this->_n + rhs.getValue())); // revoie une copie
}

std::ostream & operator<<(std::ostream & o, Integer const &rhs)
{
    o << rhs.getValue();
    return(o);
}

int main()
{
    Integer x(30);
    Integer y(10);
    Integer z(0);
    
    std::cout << "value of x " << x << std::endl;
    std::cout << "value of y " << y << std::endl;
    y = Integer(12); 
    std::cout << "value of y " << y << std::endl;

    std::cout << "value of z " << z << std::endl;
    z = x + y;
    std::cout << "value of z " << z << std::endl;
    return (0);
}