#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>

#define GREEN "\033[1;32m"
#define RED "\033[1;31m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        // Tipo de iterador basado en el contenedor subyacente
        typedef typename std::stack<T>::container_type::iterator                iterator;
        typedef typename std::stack<T>::container_type::const_iterator          const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator        reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator  const_reverse_iterator;

        MutantStack(void);
        MutantStack(const MutantStack& other);
        MutantStack &operator=(const MutantStack &other);
        ~MutantStack();

        // Member functions for iterators
        iterator begin(void) { 
            return this->c.begin();}
        iterator end(void) { 
            return this->c.end(); }
        const_iterator begin(void) const { 
            return this->c.begin(); }
        const_iterator end(void) const { 
            return this->c.end(); }
        reverse_iterator rbegin(void) { 
            return this->c.rbegin(); }
        reverse_iterator rend(void) { 
            return this->c.rend(); }
        const_reverse_iterator rbegin(void) const { 
            return this->c.rbegin(); }
        const_reverse_iterator rend(void) const { 
            return this->c.rend(); }
};

// Implementación de los métodos
template <typename T>
MutantStack<T>::MutantStack(void) {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other) : std::stack<T>(other) {}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other) {
    if (this != &other) {
        std::stack<T>::operator=(other);
    }
    return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(void) {}

#endif