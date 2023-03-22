Exercise-1

int RecursiveSum(int n) {
  if (n == 0) {
    return 0;
  }
  else {
    return n + RecursiveSum(n - 1);
  }
}

=======================

Exercise-2

int ListSum(vector<int> nums) {
  int sum = 0;
  for (int i = 0; i < nums.size(); i++) {
    sum += nums[i];
  }
  return sum;
}

or

int ListSum(vector<int>& nums) {
  if (nums.size() == 1) {
    return nums.at(0);
  }
  else {
    vector<int> new_vector(nums.begin() + 1, nums.begin() + nums.size());
    return nums.at(0) + ListSum(new_vector);
  }
}


========================

Exercise-3

int BunnyEars(int n) {
  if (n == 0) {
    return 0;
  }
  else {
    return 2 + BunnyEars(n - 1);
  }
}

=========================

Exercise-4

std::string ReverseString(std::string str) {
  int n = str.length();

  // Swap character from start to end until midpoint
  for (int i = 0; i < n / 2; i++) {
    char temp = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = temp;
  }

  return str;
}

or

string ReverseString(string s) {
  if (s.length() == 1) {
    return s;
  }
  else {
    return s.substr(s.length() - 1) + ReverseString(s.substr(0, s.length() - 1));
  }
}


============================

Exercise-5

int GetMax(const vector<int>& nums) {
  if(nums.empty()) {
    // Handle the case where the vector is empty.
    return 0;
  }

  int max_value = nums[0];
  for(int i = 1; i < nums.size(); i++) {
    if(nums[i] > max_value) {
      max_value = nums[i];
    }
  }
  return max_value;
}


or


int GetMax(vector<int>& nums) {
  if (nums.size() == 1) {
    return nums.at(0);
  }
  else {
    vector<int> new_vector(nums.begin() + 1, nums.begin() + nums.size());
    return max(nums.at(0), GetMax(new_vector));
  }
}



