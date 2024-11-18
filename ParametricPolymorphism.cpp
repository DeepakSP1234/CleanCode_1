    
    vector<string> Filter(vector<string> data, function <bool (const string&)> func)
    {
        
      vector<string> retList;
      // iterate  
      for (auto name: data)
        {
            // invoke predicate
            if (func (name))
               // aggregate result 
               retList.push_back(name);
        }
        // project the result
        return retList;        
    }

    vector<int> Filter(vector<int> data, function <bool (const int&)> func)
    {
        
      vector<int> retList;
      // iterate  
      for (auto name: data)
        {
            // invoke predicate
            if (func (name))
               // aggregate result 
               retList.push_back(name);
        }
        // project the result
        return retList;        
    }
