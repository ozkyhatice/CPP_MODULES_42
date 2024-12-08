#include "MutantStack.hpp"
#include <list>
int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);

{
	std::cout << "=== MutantStack Example ===" << std::endl;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top element: " << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    std::cout << "Iterating over stack elements:" << std::endl;
    while (it != ite) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;

    std::stack<int> s1(mstack);
    std::cout << "Copied stack top element: " << s1.top() << std::endl;

    std::cout << std::endl;

    std::cout << "=== MutantStack with strings ===" << std::endl;
    MutantStack<std::string> mstackStrings;
    mstackStrings.push("Hello");
    mstackStrings.push("World");
    mstackStrings.push("42");
    std::cout << "Top string: " << mstackStrings.top() << std::endl;

    mstackStrings.pop();
    std::cout << "After pop, top string: " << mstackStrings.top() << std::endl;

    MutantStack<std::string>::iterator strIt = mstackStrings.begin();
    MutantStack<std::string>::iterator strIte = mstackStrings.end();
    std::cout << "Iterating over string stack:" << std::endl;
    while (strIt != strIte) {
        std::cout << *strIt << " ";
        ++strIt;
    }
    std::cout << std::endl;

    std::cout << std::endl;

    std::cout << "=== Comparing MutantStack and std::list ===" << std::endl;

    std::list<int> mstack2;
    mstack2.push_back(5);
    mstack2.push_back(17);
    std::cout << "List front element: " << mstack2.front() << std::endl;
    mstack2.pop_back();
    std::cout << "List size after pop: " << mstack2.size() << std::endl;

    mstack2.push_back(3);
    mstack2.push_back(5);
    mstack2.push_back(737);
    mstack2.push_back(0);

    std::cout << "Iterating over list elements:" << std::endl;
    std::list<int>::iterator listIt = mstack2.begin();
    std::list<int>::iterator listIte = mstack2.end();
    while (listIt != listIte) {
        std::cout << *listIt << " ";
        ++listIt;
    }
    std::cout << std::endl;

    std::cout << "=== MutantStack with double ===" << std::endl;
    MutantStack<double> mstackDoubles;
    mstackDoubles.push(3.14);
    mstackDoubles.push(2.718);
    mstackDoubles.push(1.618);
    std::cout << "Top double: " << mstackDoubles.top() << std::endl;

    mstackDoubles.pop();
    std::cout << "After pop, top double: " << mstackDoubles.top() << std::endl;

    MutantStack<double>::iterator doubleIt = mstackDoubles.begin();
    MutantStack<double>::iterator doubleIte = mstackDoubles.end();
    std::cout << "Iterating over double stack:" << std::endl;
    while (doubleIt != doubleIte) {
        std::cout << *doubleIt << " ";
        ++doubleIt;
    }
    std::cout << std::endl;
}
return 0;
}