#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
    
private: 
    char *str;                                  // pointer to a char[] that holds a C-style string
    
public:
    Mystring();                                 // No-args constructor
    Mystring(const char *s);                    // Overloaded constructor
    Mystring(const Mystring &source);           // Copy Constructor
    Mystring(Mystring &&source);                // Move constructor
    ~Mystring();                                // Destructor
    
    Mystring &operator=(const Mystring &rhs);   // Copy assigment
    Mystring &operator = (Mystring &&rhs);      // Move assignement
    
    Mystring operator-() const;                 // make lowercase
    Mystring operator+(const Mystring &rhs) const;    // concatenate
    bool operator==(const Mystring &rhs) const; // 
    
    void display() const;
    int get_length() const;                     // getters
    const char *get_str() const;

};

#endif // MYSTRING_H

