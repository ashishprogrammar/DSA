#include<iostream>
using namespace std;

int power(int ex){
  if(ex==0)
    return 1;
  int result = 26*power(ex-1);
  return result;

int titleToNumber(string columnTitle) {
    int sum = 0;
    int index=0;
    int size = columnTitle.size();
    while(index!=size){
        int digit = columnTitle[index] - 'A' +1;
        sum= power(size-index-1)*digit + sum;
        index++;
    }
    return sum;
}

int main() {
    string columnTitle = "AB";
    cout << "Column Number for " << columnTitle << " is " << titleToNumber(columnTitle) << endl;
    return 0;
}
