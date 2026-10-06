class Solution {
public:
    string largestOddNumber(string num  ) {
       for ( int i = num.size() -1 ; i >= 0 ; i -- ){
          if ( (num[i] - '0' ) % 2 == 1){// converting num char to int form and checking if its odd or not 
            return num.substr(0 , i + 1);   // return substring from starting to the odd no 
          }
       }
      return "" ; // giving this incase no odd number string showed up
    }
};