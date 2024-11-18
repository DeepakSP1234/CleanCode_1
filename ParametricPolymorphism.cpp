    template <typename T>
    vector<T> Filter(vector<T> data, function <bool (const T&)> func)
    {
        
      vector<T> retList;
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
