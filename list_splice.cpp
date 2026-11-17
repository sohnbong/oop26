#include <iostream>
#include <list>
#include <string>

// Helper function to print a list (using traditional C++98 iterators)
void printList(const std::string& name, const std::list<int>& lst) {
    std::cout << name << ": ";
    for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}

int main() {
    // Initialize list1 with {1, 2, 3} using push_back
    std::list<int> list1;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);

    // Initialize list2 with {4, 5, 6} using push_back
    std::list<int> list2;
    list2.push_back(4);
    list2.push_back(5);
    list2.push_back(6);

    printList("Initial list1", list1);
    printList("Initial list2", list2);

    // Find an iterator position in list1 (point to the element '2')
    std::list<int>::iterator it = list1.begin();
    ++it; // points to 2

    // 1. Splice all elements of list2 into list1 before iterator 'it'
    list1.splice(it, list2);

    std::cout << "\n--- After splicing entire list2 into list1 ---\n";
    printList("list1", list1);
    printList("list2", list2); // list2 is now empty

    // 2. Reinitialize list2 and use single-element splice overload
    list2.clear();
    list2.push_back(7);
    list2.push_back(8);
    list2.push_back(9);

    std::list<int>::iterator it2 = list1.begin(); // points to the beginning of list1 (1)
    

    std::list<int>::iterator list2_it = list2.begin(); // points to 7
    // Move just the first element of list2 into list1
    list1.splice(it2, list2, list2_it);

    // Move a subsequence of list 2 into it2
    //list2_it++; list2_it++;
    //list1.splice(it2, list2, list2.begin(),list2_it);

    std::cout << "\n--- After splicing a single element from list2 ---\n";
    printList("list1", list1);
    printList("list2", list2); // contains {8, 9}

    return 0;
}
