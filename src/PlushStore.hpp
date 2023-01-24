#pragma once
#include <string>

class PlushStore{

    public:
        PlushStore (const std::string& name)
        : _name {name}
        {}
        const std::string& get_name() const {
            return _name;
        }

    private:
        std::string _name; 
};