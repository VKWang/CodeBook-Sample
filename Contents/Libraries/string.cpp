#include <string>
using namespace std;
{
/*Strings are objects that represent sequences of characters.*/
// Not Member Functions
    //Convert from strings
        int stoi(const string& str, size_t* idx=0, int base=10);
            // string起idx 轉 int(base) 且idx標示轉換子字串之後 
        long stol(const string& str, size_t* idx=0, int base=10);
            // string起idx 轉 long int(base) 且idx標示轉換子字串之後
        unsigned long stoul(const string& str, size_t* idx=0, int base=10);
            // string起idx 轉 unsinged int(base) 且idx標示轉換子字串之後
        long long stoll(const string& str, size_t* idx=0, int base=10);
            // string起idx 轉 long long(base) 且idx標示轉換子字串之後
        unsigned long long stoull (const string& str, size_t* idx=0, int base=10);
            // string起idx 轉 unsinged long long(base) 且idx標示轉換子字串之後
        float stof(const string& str, size_t* idx=0);
            // string起idx 轉 float 且idx標示轉換子字串之後
        double stod(const string&  str, size_t* idx=0);
            // string起idx 轉 double 且idx標示轉換子字串之後
        long double stold (const string& str, size_t* idx=0);
            // string起idx 轉 long double 且idx標示轉換子字串之後

    //Convert to strings
    string to_string (int val);
    string to_string (long val);
    string to_string (long long val);
    string to_string (unsigned val);
    string to_string (unsigned long val);
    string to_string (unsigned long long val);
    string to_string (float val);
    string to_string (double val);
    string to_string (long double val);
        //Convert numerical value to string
// Member Function
    //operator=
        //String assignment
//Iterators:
    begin();
    end();
    rbegin();
    rend();
//Capacity:
    size();
    length();
        //Return length of string, in terms of bytes
    max_size();
        //Return maximum size of string
    resize(n);
    resize(n, val);
        //Resize string
    clear();
        //Clear string
    empty();
        //Test if string is empty
    shrink_to_fit();
        //Shrink to fit

//Element access:
    //char operator[]
        //Get character of string
    char at(index);
        //Get character in string
    char back();
        //Access last character
    char front();
        //Access first character

//Modifiers:
    // string operator +=
    append (const string& str); // string
    append (const string& str, size_t subpos, size_t sublen);//substring
    append (const char* s);// char*
    append (const char* s, size_t n);//buffer(first n char)
    append (size_t n, char c);//fill
    append (InputIterator first, InputIterator last); //range
        // Append to string
    push_back(char);
        //Append character to string
    string (1)	
    assign (string);//string
    assign (string, size_t subpos, size_t sublen);//substring
    assign (const char* s);//c-string
    assign (const char* s, size_t n);//buffer(first n char)
    assign (size_t n, char c);//fill
    assign (InputIterator first, InputIterator last);//range
        //Assign new content to string
    insert (size_t pos, const string& str);//string
    insert (size_t pos, const string& str, size_t subpos, size_t sublen);//substring	
    insert (size_t pos, const char* s);//char*
    insert (size_t pos, const char* s, size_t n);//buffer
    insert (size_t pos, size_t n, char c);//fill
    void insert (iterator p, size_t n, char c);//fill
    iterator insert (iterator p, char c);//char
    void insert (iterator p, InputIterator first, InputIterator last);//range
        //Insert into string before posision(pos)
    erase(size_t pos = 0, size_t len = npos);
    iterator erase (iterator p);
    iterator erase (iterator first, iterator last);//range
        //Erase characters from string
    replace (size_t pos,  size_t len,  const string& str);//string
    replace (iterator i1, iterator i2, const string& str);//string
    replace (size_t pos,  size_t len,  const string& str,
                 size_t subpos, size_t sublen);//substring
    replace (size_t pos,  size_t len,  const char* s);//char*
    replace (iterator i1, iterator i2, const char* s);//char*
    replace (size_t pos,  size_t len,  const char* s, size_t n);//buffer
    replace (iterator i1, iterator i2, const char* s, size_t n);//buffer
    replace (size_t pos,  size_t len,  size_t n, char c);//fill
    replace (iterator i1, iterator i2, size_t n, char c);//fill
    replace (iterator i1, iterator i2, range);//range
        //Replaces the portion of the string that begins at character pos and spans len characters
        //  or [i1,i2)
    swap(string& str);
        //Swap string values
    pop_back();
        //Delete last character

//String operations:
    const char* c_str() const;
        //Get C string equivalent (public member function )
    const char* data() const;
        //Get string data (public member function )
    size_t copy (char* s, size_t len, size_t pos = 0) const;
        //Copy sequence of characters from string (public member function )
find
//Find content in string (public member function )
rfind
//Find last occurrence of content in string (public member function )
    string substr (size_t pos = 0, size_t len = npos) const;
        //Generate substring that starts at character position pos and spans len characters
        // (or until the end of the string, whichever comes first). (public member function )
    int compare (string) const;//string
    int compare (size_t pos, size_t len, string) const;//substring
    int compare (size_t pos, size_t len, string, size_t subpos, size_t sublen) const;//substring
    int compare (const char* s) const;//char*
    int compare (size_t pos, size_t len, const char* s) const;//char*
    int compare (size_t pos, size_t len, const char* s, size_t n) const;//buffer
        //Compare strings (public member function )

//Member constants
    npos //Maximum value for size_t

// Non-member function overloads
    operator +
        //Concatenate strings (function )
    relational operators == != >= > <= <
        //Relational operators for string (function )
    swap(str1, str2);
        //Exchanges the values of two strings (function )
    operator>>
        //Extract string from stream (function )
    operator<<
        //Insert string into stream (function )
    getline(istream, string);
        //Get line from stream into string (function )
}