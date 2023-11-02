#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
class hash {
    public:
        hash(int size){
            size = total_elements;
            table = new std::vector<std::string>[total_elements];
        }
        int hash_function(int key){
            return key % total_elements;
        }
        void insertElement(int key);
        void removeElement(int key);
    private:
        int total_elements;
        std::vector<std::string>* table;
        
};