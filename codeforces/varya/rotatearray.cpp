/////////////////////////////////////////////////////////
// Заполняем новый массив

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
      vector <int> nnums;
      for (int i=0; i<nums.size(); i++) {
        // заполняем новый массив
      }
       for (i=0; i<k; i++) {
         int k = nums[nums.size() - 1];

       } 
    }
};

/////////////////////////////////////////////////////////
// Добавляем последний элемент в начало массива, а потом удаляем его с конца

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for (int i=0; i<k; i++) {
          int last = nums[nums.size() - 1];
          nums.insert(begin(), last);
          nums.pop_back();
        }
        return nums
    }
};

//////////////////////////////////////////////////////////
// Перепорачиваем массив в определённом моменте

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        }
        return nums
    }
};

////////////////////////////////////////////////////////
// Добавлять элементы только в конец

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> new_one;
        for (int i=k-1; i>=0; i--) {
            new_one.push_back(nums[nums.size() - i]);
        }
        for (int i=0; i<nums.size() - k; i++) {
            new_one.push_back(nums[i]);
        }
        nums = new_one;
    }
};

