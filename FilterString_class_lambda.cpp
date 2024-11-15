#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <functional>

using namespace std;

class stringarray_filteroperations
{
    
    public:
    stringarray_filteroperations(const vector<string>& strings)
    {
        data = strings;
    }
    

    vector<string> StartsWith (const char& letter)
    {
        auto CheckString_startsWith =  [letter] (const string& str) -> bool {
            if (str.at(0) == letter)
                return true;
            else
                return false;
        };
        return (FilterString(CheckString_startsWith));
    }
    
    vector<string> EndsWith (const char& letter)
    {
        auto CheckString_endsWith =  [letter] (const string& str) -> bool
        {
            if (str.at(str.length()-1) == letter)
                return true;
            else
                return false;
        };
        return (FilterString(CheckString_endsWith));
    }
    
    vector<string> length (const int& len)
    {
        auto CheckString_length =  [len] (const string& str) -> bool
        {
            if (str.length() == len)
                return true;
            else
                return false;
        };     
        return (FilterString(CheckString_length));
    }
    
    private:
    vector<string> data;
    
    vector<string> FilterString(function <bool (const string&)> func)
    {
        vector<string> retList;
        for (auto name: data)
        {
            if (func (name))
                retList.push_back(name);
        }
        return retList;        
    }

};


void Print_Strings(vector<string> strings)
{
    for ( auto data : strings)
    {
        cout << data << endl;
    }
}

int main() {
	vector<string> names = {"bosch", "bengaluru", "red", "lemon", "hire", "some"};
	
	stringarray_filteroperations Obj(names); 
	
	vector<string> name_StartsWith_b = Obj.StartsWith('b');
	cout<< "Names starting with b:" << endl;
	Print_Strings (name_StartsWith_b);
	
	vector<string> name_EndsWith_e = Obj.EndsWith('e');
	cout<< "Names ending with e:" << endl;
	Print_Strings (name_EndsWith_e);
	
	vector<string> name_length_4 = Obj.length(4);
	cout<< "Names with length 4:" << endl;
	Print_Strings (name_length_4);

}
