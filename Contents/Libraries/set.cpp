#include <set>
using namespace std;
{
/* Containers that store unique elements following a specific order
 * The value of an element each must be unique(like a key)
 * The value of the elements cannot be modified, but can be inserted or removed
 * Elements are sorted in order by their key
 */

// Constructor
    set<int> first;
        // empty
    int myints[]= {10,20,30,40,50};
    set<int> second (myints,myints+5);
        // range
    set<int> third (second);
        // copy
// Operator
    set& operator = (const set& x); // copy	
// Iterators
    begin(); // Return iterator to beginning
    end(); // Return iterator to end
    rbegin(); // Return reverse iterator to reverse beginning
    rend(); // Return reverse iterator to reverse end
// Capacity:
    bool empty();
        //Test whether container is empty
    size_type size();
        // Return container size
    size_type max_size();
        // Return maximum size
// Modifiers:
    pair<iterator,bool> insert(val);
        // Insert element true if inserted false if existed
    void/size_type/void erase(val/iterator/range);
        // Erase elements
    void swap (set& x);
        // Swap content
    void clear();
        // Clear content
// Operations
    iterator find(val) const;
        // Get iterator to element, end if none
    size_type count(val) const;
        // Count elements with a specific value
    iterator lower_bound(val) const;
        // Return iterator to lower bound
    iterator upper_bound(val) const;
        // Return iterator to upper bound
    pair<iterator,iterator> equal_range(val) const;
        // Get range of equal elements
}