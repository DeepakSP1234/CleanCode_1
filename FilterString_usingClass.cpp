#include <bits/stdc++.h>
#include <vector>
#include <string>

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
        vector<string> retList;
        for (auto name: data)
        {
            if (name.at(0) == letter)
                retList.push_back(name);
        }
        return retList;
    }
    
    vector<string> EndsWith (const char& letter)
    {
        vector<string> retList;
        for (auto name: data)
        {
            if (name.at(name.length() - 1) == letter)
                retList.push_back(name);
        }
        return retList;
    }
    
    vector<string> length (const int& len)
    {
        vector<string> retList;
        for (auto name: data)
        {
            if (name.length() == len)
                retList.push_back(name);
        }
        return retList;
    }
    
    private:
    vector<string> data;
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
