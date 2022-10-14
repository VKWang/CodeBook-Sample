#include <vector>
using namespace std;
{
/* Sequence containers that can change in size.
 * Like arrays their elements can be accessed using offsets on regular pointers to its elements
 *  but consume more memory in exchange for grow dynamically in an efficient way.
 */
// Constructor
    vector<int> first; // empty
    vector<int> second (4,100); // four ints with value 100
    vector<int> third (second.begin(),second.end()); // range
    vector<int> fourth (third); // copy
// Iterators:
    begin();
    end();
    rbegin();
    rend();
// Capacity:
    size();
    max_size();
    resize(size_type n);
    resize(size_type n, value_type val);
        // resize vector with first n elements
    bool empty();
//Element access:
    myvector[index]; //operator[]
        //Access element
    at(index); // by reference
        //Access element
    front();
        /Access first element
    back();
        // Access last element
//Modifiers:
    assign(range, fill);    // fill"n, val"
        // Assign/replace new content
    push_back(val);
        //Add element at the end
    pop_back();
        //Delete last element
    iterator insert(iterator, val);
    insert(iterator, fill);
    insert(iterator, range);
        //Insert elements
    iterator erase(iterator);
    iterator erase(range);
        //Erase elements
    swap(vector<>& x);
        //Swap content
    clear();
        //Clear content
}