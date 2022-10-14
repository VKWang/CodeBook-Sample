#include <map>
using namespace std;
{
/* Associative containers that store elements by a combination
 *  of a key value and a mapped value, in a specific order
 *  associated with key value.
 * [Key values] are used to sort and uniquely identify elements
 * [Mapped values] store the content associated to this key.
 */

// Constructor
    map<char,int> mp1;   // empty
    map<char,int> mp2 (mp1.begin(),mp1.end());  // range
    map<char,int> mp3 (mp1);    // copy
// Operator
    mp1['a'] = 3;
    mp1['b'] = 1;
    mp1['c'] = 2;
        // [] Access element by reference or insert new element if not found
        // =  Assign new content by replacing
// Iterator
    iterator begin();  // Return iterator to beginning
    iterator end();    // Return iterator to end
    iterator rbegin(); // Return reverse iterator to reverse beginning
    iterator rend();   // Return reverse iterator to reverse end
// Capacity
    bool empty();     // test if empty
    size_type size(); // return size
    size_type max_size();       // return maximum size
// Element access
    ['a']    // operator []
    at('a');// by reference / const
// Modifiers
    // Insert element
        pair<map::iterator,bool> insert(value_type& val);
            // value_type eg. for mp1 is pair<char,int>('x', 10)
        iterator insert(mp1.begin(),mp1.find('c'));
            // range
    // Clear content
        void clear();
    // Erase element
        void erase(iterator k); // by iterator
        size_type erase(const key_type& k); // by key
            // eg. mp1.erase('x') return erased element num
        void erase(iterator first, iterator last); // by range
    // Swap content of 2 same type map
        void swap (map& x);
// Operations
    // Find element by key, end() if none
        iterator find(const key_type& k);
    // Count elements with a specific key (max_val = 1)
        size_type count (const key_type& k) const;
    // Iterator to lower bound
        iterator lower_bound(const key_type& k);
    // Iterator to upper bound
        iterator upper_bound(const key_type& k);
    // Get range of equal elements
        pair<iterator,iterator> equal_range(const key_type& k);
}